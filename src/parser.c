#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  sym_path = 16,
  sym_number = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  sym_comment = 20,
  sym_source_file = 21,
  sym_declaration = 22,
  sym_declaration_type = 23,
  sym_declaration_name = 24,
  sym_declaration_body = 25,
  sym_field = 26,
  sym__value = 27,
  sym_array = 28,
  sym_dict = 29,
  sym_import_statement = 30,
  sym_default_import = 31,
  sym_named_import = 32,
  sym_alias = 33,
  sym_bool = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_declaration_body_repeat1 = 36,
  aux_sym_array_repeat1 = 37,
  aux_sym_named_import_repeat1 = 38,
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
  [sym_path] = "path",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_comment] = "comment",
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
  [sym_path] = sym_path,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_comment] = sym_comment,
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
  [sym_path] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '"', 2,
        ',', 53,
        '/', 12,
        ':', 55,
        '[', 56,
        ']', 57,
        'a', 31,
        'e', 27,
        'f', 15,
        'i', 26,
        'p', 16,
        'r', 28,
        't', 35,
        '{', 52,
        '}', 54,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '[') ADVANCE(56);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '{') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == '@') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_app);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_page);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_path);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
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
    [sym_path] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 2,
      sym_string,
      sym_number,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 5,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
  [31] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 2,
      sym_string,
      sym_number,
    STATE(39), 5,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
  [59] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(29), 2,
      sym_string,
      sym_number,
    STATE(46), 5,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
  [87] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      sym_comment,
    STATE(41), 1,
      sym_declaration_type,
    STATE(5), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(33), 4,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [107] = 5,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_comment,
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
  [127] = 1,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
      sym_comment,
  [136] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
      sym_comment,
  [145] = 1,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
      sym_comment,
  [154] = 1,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
      sym_comment,
  [163] = 4,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(44), 1,
      sym_default_import,
    STATE(51), 1,
      sym_named_import,
  [176] = 4,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_as,
    ACTIONS(61), 1,
      sym_identifier,
  [189] = 1,
    ACTIONS(63), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [195] = 1,
    ACTIONS(65), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [201] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_declaration_body_repeat1,
  [211] = 3,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(21), 1,
      sym_field,
  [221] = 3,
    ACTIONS(73), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(28), 1,
      sym_field,
  [231] = 1,
    ACTIONS(77), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [237] = 3,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_declaration_body_repeat1,
  [247] = 1,
    ACTIONS(84), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [253] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_declaration_body_repeat1,
  [263] = 3,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_array_repeat1,
  [273] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym_identifier,
    STATE(29), 1,
      aux_sym_named_import_repeat1,
  [283] = 1,
    ACTIONS(96), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [289] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      aux_sym_declaration_body_repeat1,
  [299] = 1,
    ACTIONS(100), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [305] = 3,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_repeat1,
  [315] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_declaration_body_repeat1,
  [325] = 3,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_named_import_repeat1,
  [335] = 1,
    ACTIONS(108), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [341] = 1,
    ACTIONS(110), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [347] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_repeat1,
  [357] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(33), 1,
      aux_sym_named_import_repeat1,
  [367] = 1,
    ACTIONS(122), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [373] = 1,
    ACTIONS(124), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
  [379] = 2,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [387] = 2,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(36), 1,
      sym_alias,
  [394] = 2,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(40), 1,
      sym_field,
  [401] = 1,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [406] = 1,
    ACTIONS(82), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [411] = 2,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(47), 1,
      sym_declaration_name,
  [418] = 2,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_named_import,
  [425] = 1,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_from,
  [430] = 2,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_from,
  [437] = 1,
    ACTIONS(117), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [442] = 1,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [447] = 2,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_declaration_body,
  [454] = 1,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [459] = 1,
    ACTIONS(146), 1,
      sym_path,
  [463] = 1,
    ACTIONS(148), 1,
      anon_sym_from,
  [467] = 1,
    ACTIONS(138), 1,
      anon_sym_from,
  [471] = 1,
    ACTIONS(150), 1,
      anon_sym_from,
  [475] = 1,
    ACTIONS(152), 1,
      anon_sym_from,
  [479] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [483] = 1,
    ACTIONS(156), 1,
      anon_sym_COLON,
  [487] = 1,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
  [491] = 1,
    ACTIONS(160), 1,
      sym_path,
  [495] = 1,
    ACTIONS(162), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 59,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 195,
  [SMALL_STATE(15)] = 201,
  [SMALL_STATE(16)] = 211,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 237,
  [SMALL_STATE(20)] = 247,
  [SMALL_STATE(21)] = 253,
  [SMALL_STATE(22)] = 263,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 283,
  [SMALL_STATE(25)] = 289,
  [SMALL_STATE(26)] = 299,
  [SMALL_STATE(27)] = 305,
  [SMALL_STATE(28)] = 315,
  [SMALL_STATE(29)] = 325,
  [SMALL_STATE(30)] = 335,
  [SMALL_STATE(31)] = 341,
  [SMALL_STATE(32)] = 347,
  [SMALL_STATE(33)] = 357,
  [SMALL_STATE(34)] = 367,
  [SMALL_STATE(35)] = 373,
  [SMALL_STATE(36)] = 379,
  [SMALL_STATE(37)] = 387,
  [SMALL_STATE(38)] = 394,
  [SMALL_STATE(39)] = 401,
  [SMALL_STATE(40)] = 406,
  [SMALL_STATE(41)] = 411,
  [SMALL_STATE(42)] = 418,
  [SMALL_STATE(43)] = 425,
  [SMALL_STATE(44)] = 430,
  [SMALL_STATE(45)] = 437,
  [SMALL_STATE(46)] = 442,
  [SMALL_STATE(47)] = 447,
  [SMALL_STATE(48)] = 454,
  [SMALL_STATE(49)] = 459,
  [SMALL_STATE(50)] = 463,
  [SMALL_STATE(51)] = 467,
  [SMALL_STATE(52)] = 471,
  [SMALL_STATE(53)] = 475,
  [SMALL_STATE(54)] = 479,
  [SMALL_STATE(55)] = 483,
  [SMALL_STATE(56)] = 487,
  [SMALL_STATE(57)] = 491,
  [SMALL_STATE(58)] = 495,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_import, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1, 0, 0),
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
