#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
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
  [25] = 18,
  [26] = 22,
  [27] = 12,
  [28] = 13,
  [29] = 8,
  [30] = 14,
  [31] = 31,
  [32] = 32,
  [33] = 11,
  [34] = 34,
  [35] = 9,
  [36] = 10,
  [37] = 32,
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
  [51] = 50,
  [52] = 46,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 55,
  [64] = 60,
  [65] = 54,
  [66] = 62,
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
      if (lookahead == '/') ADVANCE(12);
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
      ADVANCE_MAP(
        '"', 6,
        ',', 53,
        '/', 12,
        '[', 56,
        ']', 57,
        'f', 63,
        'i', 67,
        't', 70,
        '{', 52,
      );
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
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
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
    [sym_source_file] = STATE(59),
    [sym_declaration] = STATE(15),
    [sym_declaration_type] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(15),
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
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(11), 4,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_comment,
    STATE(5), 6,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
      aux_sym_array_repeat1,
  [34] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 4,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_comment,
    STATE(4), 6,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
      aux_sym_array_repeat1,
  [68] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(11), 4,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_comment,
    STATE(5), 6,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
      aux_sym_array_repeat1,
  [102] = 8,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    ACTIONS(42), 1,
      anon_sym_import,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(48), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(34), 4,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_comment,
    STATE(5), 6,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
      aux_sym_array_repeat1,
  [136] = 8,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(51), 4,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_comment,
    STATE(2), 6,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
      aux_sym_array_repeat1,
  [170] = 7,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_import,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(65), 2,
      sym_string,
      sym_number,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 5,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
  [198] = 2,
    ACTIONS(71), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(69), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [214] = 2,
    ACTIONS(75), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [230] = 2,
    ACTIONS(79), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(77), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [246] = 2,
    ACTIONS(83), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [262] = 2,
    ACTIONS(87), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(85), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [278] = 2,
    ACTIONS(91), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [294] = 2,
    ACTIONS(95), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [310] = 5,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym_comment,
    STATE(45), 1,
      sym_declaration_type,
    STATE(16), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 4,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [330] = 5,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym_comment,
    STATE(45), 1,
      sym_declaration_type,
    STATE(16), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(103), 4,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
  [350] = 4,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(17), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [365] = 4,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(17), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [380] = 1,
    ACTIONS(123), 6,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
      sym_comment,
  [389] = 1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
      sym_comment,
  [398] = 1,
    ACTIONS(127), 6,
      ts_builtin_sym_end,
      anon_sym_app,
      anon_sym_route,
      anon_sym_page,
      anon_sym_entity,
      sym_comment,
  [407] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(18), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [422] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(24), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [437] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(17), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [452] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(17), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [467] = 4,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(25), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [482] = 1,
    ACTIONS(85), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [489] = 1,
    ACTIONS(89), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [496] = 1,
    ACTIONS(69), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [503] = 1,
    ACTIONS(93), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [510] = 4,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_as,
    ACTIONS(151), 1,
      sym_identifier,
  [523] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(51), 1,
      sym_default_import,
    STATE(54), 1,
      sym_named_import,
  [536] = 1,
    ACTIONS(81), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [543] = 1,
    ACTIONS(157), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [550] = 1,
    ACTIONS(73), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [557] = 1,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [564] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_identifier,
    STATE(50), 1,
      sym_default_import,
    STATE(65), 1,
      sym_named_import,
  [577] = 3,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_named_import_repeat1,
  [587] = 3,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(165), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_named_import_repeat1,
  [597] = 3,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      aux_sym_named_import_repeat1,
  [607] = 1,
    ACTIONS(170), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
  [613] = 2,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [621] = 2,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_declaration_body,
  [628] = 1,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [633] = 2,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(43), 1,
      sym_declaration_name,
  [640] = 2,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_named_import,
  [647] = 1,
    ACTIONS(163), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [652] = 2,
    ACTIONS(182), 1,
      sym_identifier,
    STATE(42), 1,
      sym_alias,
  [659] = 1,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_from,
  [664] = 2,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_from,
  [671] = 2,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_from,
  [678] = 2,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_named_import,
  [685] = 1,
    ACTIONS(194), 1,
      anon_sym_COLON,
  [689] = 1,
    ACTIONS(192), 1,
      anon_sym_from,
  [693] = 1,
    ACTIONS(196), 1,
      sym_path,
  [697] = 1,
    ACTIONS(198), 1,
      sym_identifier,
  [701] = 1,
    ACTIONS(200), 1,
      anon_sym_from,
  [705] = 1,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
  [709] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [713] = 1,
    ACTIONS(206), 1,
      sym_path,
  [717] = 1,
    ACTIONS(208), 1,
      anon_sym_from,
  [721] = 1,
    ACTIONS(210), 1,
      anon_sym_from,
  [725] = 1,
    ACTIONS(212), 1,
      sym_path,
  [729] = 1,
    ACTIONS(214), 1,
      sym_path,
  [733] = 1,
    ACTIONS(188), 1,
      anon_sym_from,
  [737] = 1,
    ACTIONS(216), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 136,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 230,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 294,
  [SMALL_STATE(15)] = 310,
  [SMALL_STATE(16)] = 330,
  [SMALL_STATE(17)] = 350,
  [SMALL_STATE(18)] = 365,
  [SMALL_STATE(19)] = 380,
  [SMALL_STATE(20)] = 389,
  [SMALL_STATE(21)] = 398,
  [SMALL_STATE(22)] = 407,
  [SMALL_STATE(23)] = 422,
  [SMALL_STATE(24)] = 437,
  [SMALL_STATE(25)] = 452,
  [SMALL_STATE(26)] = 467,
  [SMALL_STATE(27)] = 482,
  [SMALL_STATE(28)] = 489,
  [SMALL_STATE(29)] = 496,
  [SMALL_STATE(30)] = 503,
  [SMALL_STATE(31)] = 510,
  [SMALL_STATE(32)] = 523,
  [SMALL_STATE(33)] = 536,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 550,
  [SMALL_STATE(36)] = 557,
  [SMALL_STATE(37)] = 564,
  [SMALL_STATE(38)] = 577,
  [SMALL_STATE(39)] = 587,
  [SMALL_STATE(40)] = 597,
  [SMALL_STATE(41)] = 607,
  [SMALL_STATE(42)] = 613,
  [SMALL_STATE(43)] = 621,
  [SMALL_STATE(44)] = 628,
  [SMALL_STATE(45)] = 633,
  [SMALL_STATE(46)] = 640,
  [SMALL_STATE(47)] = 647,
  [SMALL_STATE(48)] = 652,
  [SMALL_STATE(49)] = 659,
  [SMALL_STATE(50)] = 664,
  [SMALL_STATE(51)] = 671,
  [SMALL_STATE(52)] = 678,
  [SMALL_STATE(53)] = 685,
  [SMALL_STATE(54)] = 689,
  [SMALL_STATE(55)] = 693,
  [SMALL_STATE(56)] = 697,
  [SMALL_STATE(57)] = 701,
  [SMALL_STATE(58)] = 705,
  [SMALL_STATE(59)] = 709,
  [SMALL_STATE(60)] = 713,
  [SMALL_STATE(61)] = 717,
  [SMALL_STATE(62)] = 721,
  [SMALL_STATE(63)] = 725,
  [SMALL_STATE(64)] = 729,
  [SMALL_STATE(65)] = 733,
  [SMALL_STATE(66)] = 737,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_import, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 2, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 3, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
