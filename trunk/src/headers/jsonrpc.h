/*
 * Copyright (C) 2009, 2010 Hermann Meyer, James Warden, Andreas Degert
 * Copyright (C) 2011 Pete Shorthose
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#pragma once

#ifndef SRC_HEADERS_JSONRPC_H_
#define SRC_HEADERS_JSONRPC_H_

#include "engine.h"
#include <giomm/init.h>     // NOLINT
#include <giomm/socketservice.h>
#include <ext/stdio_filebuf.h>
#include "jsonrpc_methods.h"

class MyService;

class JsonValue {
protected:
    JsonValue() {}
    virtual ~JsonValue() {}
    friend class JsonArray;
public:
    virtual double getFloat() const;
    virtual int getInt() const;
    virtual const Glib::ustring& getString() const;
};

class JsonArray: public std::vector<JsonValue*> {
public:
    JsonArray():std::vector<JsonValue*>() {}
    ~JsonArray();
    JsonValue *operator[](unsigned int i);
    void append(gx_system::JsonParser& jp);
};


class CmdConnection: public sigc::trackable {
public:
    struct methodnames {
	const char *name;
	jsonrpc_method m_id;
    };
private:
    MyService& serv;
    Glib::RefPtr<Gio::SocketConnection> connection;
    gx_system::JsonStringParser jp;
    bool parameter_change_notify;
    bool midi_config_mode;
    sigc::connection conn_preset_changed;
    sigc::connection conn_state_changed;
    sigc::connection conn_freq_changed;
    sigc::connection conn_display;
    sigc::connection conn_display_state;
    sigc::connection conn_selection_done;
    sigc::connection conn_presetlist_changed;
    sigc::connection conn_log_message;
    sigc::connection conn_midi_changed;
    sigc::connection conn_midi_value_changed;
private:
    void exec(Glib::ustring cmd);
    void call(gx_system::JsonWriter& jw, const methodnames *mn, JsonArray& params);
    void notify(gx_system::JsonWriter& jw, const methodnames *mn, JsonArray& params);
    bool request(gx_system::JsonParser& jp, gx_system::JsonWriter& jw, bool batch_start);
    void write_error(gx_system::JsonWriter& jw, int code, const char *message);
    void write_error(gx_system::JsonWriter& jw, int code, Glib::ustring& message) { write_error(jw, code, message.c_str()); }
    void error_response(gx_system::JsonWriter& jw, int code, const char *message);
    void error_response(gx_system::JsonWriter& jw, int code, Glib::ustring& message) { error_response(jw, code, message.c_str()); }
    void preset_changed();
    void send_rack_changed(bool stereo);
    void send_notify_begin(gx_system::JsonWriter& jw, const char *method);
    void send_notify_end(gx_system::JsonStringWriter& jw, bool send_out=true);
    void on_engine_state_change(gx_engine::GxEngineState state);
    void write_engine_state(gx_system::JsonWriter& jw, gx_engine::GxEngineState s);
    void on_tuner_freq_changed();
    void display(const Glib::ustring& bank, const Glib::ustring& preset);
    void set_display_state(TunerSwitcher::SwitcherState newstate);
    void on_selection_done();
    void on_presetlist_changed();
    void on_log_message(const string& msg, gx_system::GxMsgType tp, bool plugged);
    void on_midi_changed();
    void on_midi_value_changed(int ctl, int value);
    void listen(const Glib::ustring& tp);
    void unlisten(const Glib::ustring& tp);
    void send(gx_system::JsonStringWriter& jw);
    void process(gx_system::JsonStringParser& jp);

public:
    CmdConnection(MyService& serv, const Glib::RefPtr<Gio::SocketConnection>& connection_);
    ~CmdConnection();
    bool on_data(Glib::IOCondition cond);
    friend class UiBuilderVirt;
};

class MyService: public Gio::SocketService {
private:
    gx_preset::GxSettings& settings;
    gx_jack::GxJack& jack;
    sigc::slot<void> quit_mainloop;
    TunerSwitcher tuner_switcher;
    time_t oldest_unsaved;
    time_t last_change;
    sigc::connection save_conn;
    std::list<CmdConnection*> connection_list;
    virtual bool on_incoming(const Glib::RefPtr<Gio::SocketConnection>& connection,
			     const Glib::RefPtr<Glib::Object>& source_object);
    void on_switcher_toggled(bool v);
    void on_selection_done();
    void save_state();
    void remove_connection(CmdConnection* p);
    friend class CmdConnection;
public:
    MyService(gx_preset::GxSettings& settings_, gx_jack::GxJack& jack_,
	      sigc::slot<void> quit_mainloop_, int port);
    ~MyService();
};

const char *engine_state_to_string(gx_engine::GxEngineState s);
gx_engine::GxEngineState string_to_engine_state(const std::string& s);

#endif // SRC_HEADERS_JSONRPC_H_
