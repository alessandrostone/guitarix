/* generated by make_jsonrpc_methods.py */

#pragma once

#ifndef SRC_HEADERS_JSONRPC_METHODS_H_
#define SRC_HEADERS_JSONRPC_METHODS_H_

enum jsonrpc_method {
	RPCM_getversion,
	RPNM_shutdown,
	RPNM_listen,
	RPNM_unlisten,
	RPCM_getstate,
	RPNM_setstate,
	RPCM_jack_cpu_load,
	RPNM_set_jack_insert,
	RPCM_get,
	RPNM_set,
	RPCM_parameterlist,
	RPCM_get_parameter,
	RPCM_get_parameter_value,
	RPCM_desc,
	RPCM_list,
	RPNM_insert_param,
	RPNM_get_updates,
	RPCM_banks,
	RPNM_setpreset,
	RPNM_set_online_presets,
	RPNM_create_default_scratch_preset,
	RPNM_sendcc,
	RPCM_bank_insert_content,
	RPCM_bank_insert_new,
	RPCM_get_bank,
	RPCM_rename_bank,
	RPCM_bank_remove,
	RPCM_bank_get_contents,
	RPNM_bank_reorder,
	RPCM_bank_check_reparse,
	RPCM_bank_get_filename,
	RPNM_bank_set_flag,
	RPCM_convert_preset,
	RPNM_bank_save,
	RPNM_pf_save,
	RPNM_save_current,
	RPNM_save_preset,
	RPCM_presets,
	RPCM_rename_preset,
	RPNM_reorder_preset,
	RPNM_erase_preset,
	RPNM_pf_append,
	RPNM_pf_insert_before,
	RPNM_pf_insert_after,
	RPCM_plugin_preset_list_load,
	RPNM_plugin_preset_list_sync_set,
	RPNM_plugin_preset_list_set,
	RPNM_plugin_preset_list_save,
	RPNM_plugin_preset_list_remove,
	RPCM_pluginlist,
	RPCM_plugin_load_ui,
	RPCM_get_rack_unit_order,
	RPNM_insert_rack_unit,
	RPNM_remove_rack_unit,
	RPCM_queryunit,
	RPCM_get_midi_controller_map,
	RPCM_midi_size,
	RPNM_midi_deleteParameter,
	RPNM_midi_modifyCurrent,
	RPCM_midi_get_config_mode,
	RPNM_midi_set_config_mode,
	RPNM_midi_set_current_control,
	RPNM_set_midi_channel,
	RPNM_request_midi_value_update,
	RPCM_get_tuning,
	RPCM_get_tuner_freq,
	RPNM_switch_tuner,
	RPNM_tuner_used_for_display,
	RPNM_set_oscilloscope_mul_buffer,
	RPCM_get_oscilloscope_mul_buffer,
	RPNM_clear_oscilloscope_buffer,
	RPCM_get_oscilloscope_info,
	RPNM_reload_impresp_list,
	RPCM_load_impresp_dirs,
	RPCM_read_audio,
	RPCM_load_ladspalist,
	RPNM_save_ladspalist,
	RPCM_ladspaloader_update_plugins,
	RPCM_get_tuner_switcher_active,
	RPNM_tuner_switcher_activate,
	RPNM_tuner_switcher_deactivate,
	RPNM_tuner_switcher_toggle,
};

struct jsonrpc_method_def {
	const char *name;
	bool has_result;
};

extern const jsonrpc_method_def jsonrpc_method_list[];

#endif  // SRC_HEADERS_JSONRPC_METHODS_H_
