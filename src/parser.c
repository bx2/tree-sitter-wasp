#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_app = 1,
  anon_sym_route = 2,
  anon_sym_page = 3,
  anon_sym_entity = 4,
  anon_sym_LBRACE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE = 7,
  anon_sym_COLON = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_import = 11,
  anon_sym_from = 12,
  anon_sym_as = 13,
  sym_identifier = 14,
  sym_string = 15,
  sym_number = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym_source_file = 19,
  sym_declaration = 20,
  sym_declaration_type = 21,
  sym_declaration_name = 22,
  sym_declaration_body = 23,
  sym_field = 24,
  sym__value = 25,
  sym_array = 26,
  sym_dict = 27,
  sym_import_statement = 28,
  sym_default_import = 29,
  sym_named_import = 30,
  sym_alias = 31,
  sym_bool = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_declaration_body_repeat1 = 34,
  aux_sym_array_repeat1 = 35,
  aux_sym_named_import_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_app] = "app",
  [anon_sym_route] = "route",
  [anon_sym_page] = "page",
  [anon_sym_entity] = "entity",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_as] = "as",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym_declaration_type] = "declaration_type",
  [sym_declaration_name] = "declaration_name",
  [sym_declaration_body] = "declaration_body",
  [sym_field] = "field",
  [sym__value] = "_value",
  [sym_array] = "array",
  [sym_dict] = "dict",
  [sym_import_statement] = "import_statement",
  [sym_default_import] = "default_import",
  [sym_named_import] = "named_import",
  [sym_alias] = "alias",
  [sym_bool] = "bool",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_declaration_body_repeat1] = "declaration_body_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_named_import_repeat1] = "named_import_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_app] = anon_sym_app,
  [anon_sym_route] = anon_sym_route,
  [anon_sym_page] = anon_sym_page,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_as] = anon_sym_as,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym_declaration_type] = sym_declaration_type,
  [sym_declaration_name] = sym_declaration_name,
  [sym_declaration_body] = sym_declaration_body,
  [sym_field] = sym_field,
  [sym__value] = sym__value,
  [sym_array] = sym_array,
  [sym_dict] = sym_dict,
  [sym_import_statement] = sym_import_statement,
  [sym_default_import] = sym_default_import,
  [sym_named_import] = sym_named_import,
  [sym_alias] = sym_alias,
  [sym_bool] = sym_bool,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_declaration_body_repeat1] = aux_sym_declaration_body_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_named_import_repeat1] = aux_sym_named_import_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_app] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_page] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_type] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_name] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_body] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_default_import] = {
    .visible = true,
    .named = true,
  },
  [sym_named_import] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_import_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(35);
      ADVANCE_MAP(
        '"', 2,
        ',', 41,
        ':', 43,
        '[', 44,
        ']', 45,
        'a', 21,
        'e', 17,
        'f', 6,
        'i', 16,
        'p', 7,
        'r', 18,
        't', 24,
        '{', 40,
        '}', 42,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == '}') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'y') ADVANCE(39);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_app);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_page);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_app] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [anon_sym_page] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym_declaration] = STATE(6),
    [sym_declaration_type] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_app] = ACTIONS(5),
    [anon_sym_route] = ACTIONS(5),
    [anon_sym_page] = ACTIONS(5),
    [anon_sym_entity] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_RBRACK,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 5,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
  [31] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      sym_string,
      sym_number,
    STATE(39), 5,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
  [59] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_import,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(27), 2,
      sym_string,
      sym_number,
    STATE(46), 5,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
  [87] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_declaration_type,
    STATE(5), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(31), 4,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [104] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(41), 1,
      sym_declaration_type,
    STATE(5), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 4,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [121] = 1,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [129] = 1,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [137] = 1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [145] = 1,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [153] = 4,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(44), 1,
      sym_default_import,
    STATE(51), 1,
      sym_named_import,
  [166] = 4,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_as,
    ACTIONS(54), 1,
      sym_identifier,
  [179] = 1,
    ACTIONS(56), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [185] = 1,
    ACTIONS(58), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [191] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_declaration_body_repeat1,
  [201] = 3,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(21), 1,
      sym_field,
  [211] = 3,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_field,
  [221] = 1,
    ACTIONS(70), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [227] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_declaration_body_repeat1,
  [237] = 1,
    ACTIONS(77), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [243] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_declaration_body_repeat1,
  [253] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_array_repeat1,
  [263] = 3,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_named_import_repeat1,
  [273] = 1,
    ACTIONS(89), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [279] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_declaration_body_repeat1,
  [289] = 1,
    ACTIONS(93), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [295] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_repeat1,
  [305] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_declaration_body_repeat1,
  [315] = 3,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_named_import_repeat1,
  [325] = 1,
    ACTIONS(101), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [331] = 1,
    ACTIONS(103), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [337] = 3,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_repeat1,
  [347] = 3,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_named_import_repeat1,
  [357] = 1,
    ACTIONS(115), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [363] = 1,
    ACTIONS(117), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
  [369] = 2,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [377] = 2,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(36), 1,
      sym_alias,
  [384] = 2,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(40), 1,
      sym_field,
  [391] = 1,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [396] = 1,
    ACTIONS(75), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [401] = 2,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(47), 1,
      sym_declaration_name,
  [408] = 2,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_named_import,
  [415] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_from,
  [420] = 2,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_from,
  [427] = 1,
    ACTIONS(110), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [432] = 1,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [437] = 2,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_declaration_body,
  [444] = 1,
    ACTIONS(137), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [449] = 1,
    ACTIONS(139), 1,
      sym_string,
  [453] = 1,
    ACTIONS(141), 1,
      anon_sym_from,
  [457] = 1,
    ACTIONS(131), 1,
      anon_sym_from,
  [461] = 1,
    ACTIONS(143), 1,
      anon_sym_from,
  [465] = 1,
    ACTIONS(145), 1,
      anon_sym_from,
  [469] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [473] = 1,
    ACTIONS(149), 1,
      anon_sym_COLON,
  [477] = 1,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
  [481] = 1,
    ACTIONS(153), 1,
      sym_string,
  [485] = 1,
    ACTIONS(155), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 145,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 166,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 185,
  [SMALL_STATE(15)] = 191,
  [SMALL_STATE(16)] = 201,
  [SMALL_STATE(17)] = 211,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 237,
  [SMALL_STATE(21)] = 243,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 263,
  [SMALL_STATE(24)] = 273,
  [SMALL_STATE(25)] = 279,
  [SMALL_STATE(26)] = 289,
  [SMALL_STATE(27)] = 295,
  [SMALL_STATE(28)] = 305,
  [SMALL_STATE(29)] = 315,
  [SMALL_STATE(30)] = 325,
  [SMALL_STATE(31)] = 331,
  [SMALL_STATE(32)] = 337,
  [SMALL_STATE(33)] = 347,
  [SMALL_STATE(34)] = 357,
  [SMALL_STATE(35)] = 363,
  [SMALL_STATE(36)] = 369,
  [SMALL_STATE(37)] = 377,
  [SMALL_STATE(38)] = 384,
  [SMALL_STATE(39)] = 391,
  [SMALL_STATE(40)] = 396,
  [SMALL_STATE(41)] = 401,
  [SMALL_STATE(42)] = 408,
  [SMALL_STATE(43)] = 415,
  [SMALL_STATE(44)] = 420,
  [SMALL_STATE(45)] = 427,
  [SMALL_STATE(46)] = 432,
  [SMALL_STATE(47)] = 437,
  [SMALL_STATE(48)] = 444,
  [SMALL_STATE(49)] = 449,
  [SMALL_STATE(50)] = 453,
  [SMALL_STATE(51)] = 457,
  [SMALL_STATE(52)] = 461,
  [SMALL_STATE(53)] = 465,
  [SMALL_STATE(54)] = 469,
  [SMALL_STATE(55)] = 473,
  [SMALL_STATE(56)] = 477,
  [SMALL_STATE(57)] = 481,
  [SMALL_STATE(58)] = 485,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 4, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_import, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [147] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wasp(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
