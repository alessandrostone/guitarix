/* generated by make_jsonrpc_methods.py */

/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -L C++  */
/* Computed positions: -k'1,6,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

/* maximum key range = 142, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct CmdConnection::methodnames *in_word_set (const char *str, size_t len);
};

inline unsigned int
Perfect_Hash::hash (const char *str, size_t len)
{
  static const unsigned char asso_values[] =
    {
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150, 150, 150, 150, 150, 150,
      150, 150, 150, 150, 150,  90, 150,  30,  60,  15,
       30,   0, 150,  30,  15,  70,   5,  35,  35,  50,
       20,  65,  15,  25,   5,   5,   0,  25,   0,   0,
      150,   5, 150, 150, 150, 150, 150, 150
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[5])];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

const struct CmdConnection::methodnames *
Perfect_Hash::in_word_set (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 82,
      MIN_WORD_LENGTH = 3,
      MAX_WORD_LENGTH = 29,
      MIN_HASH_VALUE = 8,
      MAX_HASH_VALUE = 149
    };

  static const struct CmdConnection::methodnames wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {"set", RPNM_set},
      {""}, {""}, {""}, {""}, {""},
      {"setpreset", RPNM_setpreset},
      {""}, {""}, {""},
      {"rename_preset", RPCM_rename_preset},
      {"reorder_preset", RPNM_reorder_preset},
      {""},
      {"remove_rack_unit", RPNM_remove_rack_unit},
      {"pf_save", RPNM_pf_save},
      {""}, {""}, {""}, {""},
      {"presets", RPCM_presets},
      {"parameterlist", RPCM_parameterlist},
      {""}, {""},
      {"save_preset", RPNM_save_preset},
      {"save_current", RPNM_save_current},
      {"get", RPCM_get},
      {"convert_preset", RPCM_convert_preset},
      {"request_midi_value_update", RPNM_request_midi_value_update},
      {"pf_insert_before", RPNM_pf_insert_before},
      {"switch_tuner", RPNM_switch_tuner},
      {""},
      {"list", RPCM_list},
      {"pf_insert_after", RPNM_pf_insert_after},
      {"sendcc", RPNM_sendcc},
      {"set_oscilloscope_mul_buffer", RPNM_set_oscilloscope_mul_buffer},
      {"setstate", RPNM_setstate},
      {"create_default_scratch_preset", RPNM_create_default_scratch_preset},
      {"pluginlist", RPCM_pluginlist},
      {""}, {""},
      {"set_online_presets", RPNM_set_online_presets},
      {"desc", RPCM_desc},
      {"set_jack_insert", RPNM_set_jack_insert},
      {"rename_bank", RPCM_rename_bank},
      {""},
      {"unlisten", RPNM_unlisten},
      {"reload_impresp_list", RPNM_reload_impresp_list},
      {"save_ladspalist", RPNM_save_ladspalist},
      {""},
      {"plugin_preset_list_set", RPNM_plugin_preset_list_set},
      {"plugin_preset_list_save", RPNM_plugin_preset_list_save},
      {"queryunit", RPCM_queryunit},
      {"plugin_preset_list_remove", RPNM_plugin_preset_list_remove},
      {"get_updates", RPNM_get_updates},
      {"plugin_preset_list_sync_set", RPNM_plugin_preset_list_sync_set},
      {"jack_cpu_load", RPCM_jack_cpu_load},
      {"midi_size", RPCM_midi_size},
      {"getversion", RPCM_getversion},
      {""},
      {"get_oscilloscope_mul_buffer", RPCM_get_oscilloscope_mul_buffer},
      {"getstate", RPCM_getstate},
      {"pf_append", RPNM_pf_append},
      {"banks", RPCM_banks},
      {""}, {""}, {""},
      {"bank_save", RPNM_bank_save},
      {"midi_set_config_mode", RPNM_midi_set_config_mode},
      {"bank_remove", RPCM_bank_remove},
      {""},
      {"get_parameter", RPCM_get_parameter},
      {"get_parameter_value", RPCM_get_parameter_value},
      {"get_tuner_switcher_active", RPCM_get_tuner_switcher_active},
      {"listen", RPNM_listen},
      {"bank_reorder", RPNM_bank_reorder},
      {""},
      {"get_rack_unit_order", RPCM_get_rack_unit_order},
      {"load_ladspalist", RPCM_load_ladspalist},
      {"insert_rack_unit", RPNM_insert_rack_unit},
      {""},
      {"plugin_preset_list_load", RPCM_plugin_preset_list_load},
      {""}, {""}, {""}, {""},
      {"bank_check_reparse", RPCM_bank_check_reparse},
      {"get_tuner_freq", RPCM_get_tuner_freq},
      {"get_tuning", RPCM_get_tuning},
      {""},
      {"ladspaloader_update_plugins", RPCM_ladspaloader_update_plugins},
      {"shutdown", RPNM_shutdown},
      {""},
      {"midi_get_config_mode", RPCM_midi_get_config_mode},
      {""},
      {"erase_preset", RPNM_erase_preset},
      {"get_bank", RPCM_get_bank},
      {""},
      {"midi_deleteParameter", RPNM_midi_deleteParameter},
      {""},
      {"bank_get_filename", RPCM_bank_get_filename},
      {"bank_set_flag", RPNM_bank_set_flag},
      {""},
      {"read_audio", RPCM_read_audio},
      {"tuner_switcher_toggle", RPNM_tuner_switcher_toggle},
      {"bank_get_contents", RPCM_bank_get_contents},
      {"tuner_switcher_activate", RPNM_tuner_switcher_activate},
      {"midi_set_current_control", RPNM_midi_set_current_control},
      {"tuner_switcher_deactivate", RPNM_tuner_switcher_deactivate},
      {""},
      {"tuner_used_for_display", RPNM_tuner_used_for_display},
      {"midi_modifyCurrent", RPNM_midi_modifyCurrent},
      {"plugin_load_ui", RPCM_plugin_load_ui},
      {""},
      {"get_oscilloscope_info", RPCM_get_oscilloscope_info},
      {""}, {""}, {""}, {""},
      {"set_midi_channel", RPNM_set_midi_channel},
      {"load_impresp_dirs", RPCM_load_impresp_dirs},
      {""}, {""}, {""}, {""},
      {"insert_param", RPNM_insert_param},
      {""}, {""},
      {"clear_oscilloscope_buffer", RPNM_clear_oscilloscope_buffer},
      {""}, {""},
      {"get_midi_controller_map", RPCM_get_midi_controller_map},
      {""}, {""}, {""}, {""}, {""}, {""},
      {"bank_insert_new", RPCM_bank_insert_new},
      {""}, {""}, {""},
      {"bank_insert_content", RPCM_bank_insert_content}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}


const jsonrpc_method_def jsonrpc_method_list[] = {
	{ "getversion", true },
	{ "shutdown", false },
	{ "listen", false },
	{ "unlisten", false },
	{ "getstate", true },
	{ "setstate", false },
	{ "jack_cpu_load", true },
	{ "set_jack_insert", false },
	{ "get", true },
	{ "set", false },
	{ "parameterlist", true },
	{ "get_parameter", true },
	{ "get_parameter_value", true },
	{ "desc", true },
	{ "list", true },
	{ "insert_param", false },
	{ "get_updates", false },
	{ "banks", true },
	{ "setpreset", false },
	{ "set_online_presets", false },
	{ "create_default_scratch_preset", false },
	{ "sendcc", false },
	{ "bank_insert_content", true },
	{ "bank_insert_new", true },
	{ "get_bank", true },
	{ "rename_bank", true },
	{ "bank_remove", true },
	{ "bank_get_contents", true },
	{ "bank_reorder", false },
	{ "bank_check_reparse", true },
	{ "bank_get_filename", true },
	{ "bank_set_flag", false },
	{ "convert_preset", true },
	{ "bank_save", false },
	{ "pf_save", false },
	{ "save_current", false },
	{ "save_preset", false },
	{ "presets", true },
	{ "rename_preset", true },
	{ "reorder_preset", false },
	{ "erase_preset", false },
	{ "pf_append", false },
	{ "pf_insert_before", false },
	{ "pf_insert_after", false },
	{ "plugin_preset_list_load", true },
	{ "plugin_preset_list_sync_set", false },
	{ "plugin_preset_list_set", false },
	{ "plugin_preset_list_save", false },
	{ "plugin_preset_list_remove", false },
	{ "pluginlist", true },
	{ "plugin_load_ui", true },
	{ "get_rack_unit_order", true },
	{ "insert_rack_unit", false },
	{ "remove_rack_unit", false },
	{ "queryunit", true },
	{ "get_midi_controller_map", true },
	{ "midi_size", true },
	{ "midi_deleteParameter", false },
	{ "midi_modifyCurrent", false },
	{ "midi_get_config_mode", true },
	{ "midi_set_config_mode", false },
	{ "midi_set_current_control", false },
	{ "set_midi_channel", false },
	{ "request_midi_value_update", false },
	{ "get_tuning", true },
	{ "get_tuner_freq", true },
	{ "switch_tuner", false },
	{ "tuner_used_for_display", false },
	{ "set_oscilloscope_mul_buffer", false },
	{ "get_oscilloscope_mul_buffer", true },
	{ "clear_oscilloscope_buffer", false },
	{ "get_oscilloscope_info", true },
	{ "reload_impresp_list", false },
	{ "load_impresp_dirs", true },
	{ "read_audio", true },
	{ "load_ladspalist", true },
	{ "save_ladspalist", false },
	{ "ladspaloader_update_plugins", true },
	{ "get_tuner_switcher_active", true },
	{ "tuner_switcher_activate", false },
	{ "tuner_switcher_deactivate", false },
	{ "tuner_switcher_toggle", false },
};
