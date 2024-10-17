#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_action = 1,
  anon_sym_apiNamespace = 2,
  anon_sym_api = 3,
  anon_sym_app = 4,
  anon_sym_entity = 5,
  anon_sym_job = 6,
  anon_sym_page = 7,
  anon_sym_query = 8,
  anon_sym_route = 9,
  anon_sym_crud = 10,
  anon_sym_LBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_RBRACE = 13,
  anon_sym_COLON = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_import = 17,
  anon_sym_from = 18,
  anon_sym_as = 19,
  sym_identifier = 20,
  sym_string = 21,
  sym_path = 22,
  sym_number = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_comment = 26,
  sym_source_file = 27,
  sym_declaration = 28,
  sym_declaration_type = 29,
  sym_declaration_name = 30,
  sym_declaration_body = 31,
  sym_field = 32,
  sym__value = 33,
  sym_array = 34,
  sym_dict = 35,
  sym_import_statement = 36,
  sym_default_import = 37,
  sym_named_import = 38,
  sym_alias = 39,
  sym_bool = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_declaration_body_repeat1 = 42,
  aux_sym_array_repeat1 = 43,
  aux_sym_named_import_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_action] = "action",
  [anon_sym_apiNamespace] = "apiNamespace",
  [anon_sym_api] = "api",
  [anon_sym_app] = "app",
  [anon_sym_entity] = "entity",
  [anon_sym_job] = "job",
  [anon_sym_page] = "page",
  [anon_sym_query] = "query",
  [anon_sym_route] = "route",
  [anon_sym_crud] = "crud",
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
  [anon_sym_action] = anon_sym_action,
  [anon_sym_apiNamespace] = anon_sym_apiNamespace,
  [anon_sym_api] = anon_sym_api,
  [anon_sym_app] = anon_sym_app,
  [anon_sym_entity] = anon_sym_entity,
  [anon_sym_job] = anon_sym_job,
  [anon_sym_page] = anon_sym_page,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_route] = anon_sym_route,
  [anon_sym_crud] = anon_sym_crud,
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
  [anon_sym_action] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_apiNamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_api] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_app] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_job] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_page] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crud] = {
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
  [5] = 3,
  [6] = 2,
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
  [24] = 22,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 19,
  [29] = 17,
  [30] = 13,
  [31] = 15,
  [32] = 32,
  [33] = 14,
  [34] = 18,
  [35] = 16,
  [36] = 36,
  [37] = 36,
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
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '"', 2,
        ',', 80,
        '/', 12,
        ':', 82,
        '[', 83,
        ']', 84,
        'a', 20,
        'c', 49,
        'e', 40,
        'f', 15,
        'i', 36,
        'j', 41,
        'p', 16,
        'q', 61,
        'r', 45,
        't', 52,
        '{', 79,
        '}', 81,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead == '}') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '"', 6,
        ',', 80,
        '/', 12,
        '[', 83,
        ']', 84,
        'f', 90,
        'i', 94,
        't', 97,
        '{', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == '}') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(113);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == '@') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_action);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_apiNamespace);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_api);
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_app);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_entity);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_job);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_page);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_crud);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_path);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 11},
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
    [anon_sym_action] = ACTIONS(1),
    [anon_sym_apiNamespace] = ACTIONS(1),
    [anon_sym_api] = ACTIONS(1),
    [anon_sym_app] = ACTIONS(1),
    [anon_sym_entity] = ACTIONS(1),
    [anon_sym_job] = ACTIONS(1),
    [anon_sym_page] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [anon_sym_crud] = ACTIONS(1),
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
    [sym_declaration] = STATE(7),
    [sym_declaration_type] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_action] = ACTIONS(5),
    [anon_sym_apiNamespace] = ACTIONS(5),
    [anon_sym_api] = ACTIONS(7),
    [anon_sym_app] = ACTIONS(5),
    [anon_sym_entity] = ACTIONS(5),
    [anon_sym_job] = ACTIONS(5),
    [anon_sym_page] = ACTIONS(5),
    [anon_sym_query] = ACTIONS(5),
    [anon_sym_route] = ACTIONS(5),
    [anon_sym_crud] = ACTIONS(5),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
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
  [34] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 4,
      anon_sym_COMMA,
      sym_string,
      sym_number,
      sym_comment,
    STATE(6), 6,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
      aux_sym_array_repeat1,
  [68] = 8,
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
    STATE(4), 6,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
      aux_sym_array_repeat1,
  [102] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(23), 2,
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
  [136] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 4,
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
  [170] = 6,
    ACTIONS(7), 1,
      anon_sym_api,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_comment,
    STATE(45), 1,
      sym_declaration_type,
    STATE(8), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 9,
      anon_sym_action,
      anon_sym_apiNamespace,
      anon_sym_app,
      anon_sym_entity,
      anon_sym_job,
      anon_sym_page,
      anon_sym_query,
      anon_sym_route,
      anon_sym_crud,
  [198] = 6,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      anon_sym_api,
    ACTIONS(71), 1,
      sym_comment,
    STATE(45), 1,
      sym_declaration_type,
    STATE(8), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(65), 9,
      anon_sym_action,
      anon_sym_apiNamespace,
      anon_sym_app,
      anon_sym_entity,
      anon_sym_job,
      anon_sym_page,
      anon_sym_query,
      anon_sym_route,
      anon_sym_crud,
  [226] = 7,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      anon_sym_import,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(82), 2,
      sym_string,
      sym_number,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 5,
      sym__value,
      sym_array,
      sym_dict,
      sym_import_statement,
      sym_bool,
  [254] = 2,
    ACTIONS(88), 1,
      anon_sym_api,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_action,
      anon_sym_apiNamespace,
      anon_sym_app,
      anon_sym_entity,
      anon_sym_job,
      anon_sym_page,
      anon_sym_query,
      anon_sym_route,
      anon_sym_crud,
      sym_comment,
  [271] = 2,
    ACTIONS(92), 1,
      anon_sym_api,
    ACTIONS(90), 11,
      ts_builtin_sym_end,
      anon_sym_action,
      anon_sym_apiNamespace,
      anon_sym_app,
      anon_sym_entity,
      anon_sym_job,
      anon_sym_page,
      anon_sym_query,
      anon_sym_route,
      anon_sym_crud,
      sym_comment,
  [288] = 2,
    ACTIONS(96), 1,
      anon_sym_api,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_action,
      anon_sym_apiNamespace,
      anon_sym_app,
      anon_sym_entity,
      anon_sym_job,
      anon_sym_page,
      anon_sym_query,
      anon_sym_route,
      anon_sym_crud,
      sym_comment,
  [305] = 2,
    ACTIONS(100), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(98), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [321] = 2,
    ACTIONS(104), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [337] = 2,
    ACTIONS(108), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [353] = 2,
    ACTIONS(112), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(110), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [369] = 2,
    ACTIONS(116), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [385] = 2,
    ACTIONS(120), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(118), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [401] = 2,
    ACTIONS(124), 4,
      anon_sym_import,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 7,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_string,
      sym_number,
      sym_comment,
  [417] = 4,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(21), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [432] = 4,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(21), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [447] = 4,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(21), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [462] = 4,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(24), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [477] = 4,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(21), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [492] = 4,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(22), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [507] = 4,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      sym_comment,
    STATE(20), 2,
      sym_field,
      aux_sym_declaration_body_repeat1,
  [522] = 1,
    ACTIONS(156), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [529] = 1,
    ACTIONS(122), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [536] = 1,
    ACTIONS(114), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [543] = 1,
    ACTIONS(98), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [550] = 1,
    ACTIONS(106), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [557] = 4,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(162), 1,
      anon_sym_as,
    ACTIONS(164), 1,
      sym_identifier,
  [570] = 1,
    ACTIONS(102), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [577] = 1,
    ACTIONS(118), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [584] = 1,
    ACTIONS(110), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [591] = 4,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(51), 1,
      sym_default_import,
    STATE(54), 1,
      sym_named_import,
  [604] = 4,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      sym_identifier,
    STATE(50), 1,
      sym_default_import,
    STATE(65), 1,
      sym_named_import,
  [617] = 3,
    ACTIONS(170), 1,
      anon_sym_RBRACE,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(39), 1,
      aux_sym_named_import_repeat1,
  [627] = 3,
    ACTIONS(172), 1,
      sym_identifier,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_named_import_repeat1,
  [637] = 3,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(40), 1,
      aux_sym_named_import_repeat1,
  [647] = 2,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [655] = 1,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
  [661] = 2,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_declaration_body,
  [668] = 1,
    ACTIONS(189), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [673] = 2,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(43), 1,
      sym_declaration_name,
  [680] = 2,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_named_import,
  [687] = 1,
    ACTIONS(176), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [692] = 2,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(41), 1,
      sym_alias,
  [699] = 1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_from,
  [704] = 2,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_from,
  [711] = 2,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_from,
  [718] = 2,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_named_import,
  [725] = 1,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [729] = 1,
    ACTIONS(203), 1,
      anon_sym_from,
  [733] = 1,
    ACTIONS(207), 1,
      sym_path,
  [737] = 1,
    ACTIONS(209), 1,
      sym_identifier,
  [741] = 1,
    ACTIONS(211), 1,
      anon_sym_from,
  [745] = 1,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
  [749] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [753] = 1,
    ACTIONS(217), 1,
      sym_path,
  [757] = 1,
    ACTIONS(219), 1,
      anon_sym_from,
  [761] = 1,
    ACTIONS(221), 1,
      anon_sym_from,
  [765] = 1,
    ACTIONS(223), 1,
      sym_path,
  [769] = 1,
    ACTIONS(225), 1,
      sym_path,
  [773] = 1,
    ACTIONS(199), 1,
      anon_sym_from,
  [777] = 1,
    ACTIONS(227), 1,
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
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 254,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 288,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 369,
  [SMALL_STATE(18)] = 385,
  [SMALL_STATE(19)] = 401,
  [SMALL_STATE(20)] = 417,
  [SMALL_STATE(21)] = 432,
  [SMALL_STATE(22)] = 447,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 477,
  [SMALL_STATE(25)] = 492,
  [SMALL_STATE(26)] = 507,
  [SMALL_STATE(27)] = 522,
  [SMALL_STATE(28)] = 529,
  [SMALL_STATE(29)] = 536,
  [SMALL_STATE(30)] = 543,
  [SMALL_STATE(31)] = 550,
  [SMALL_STATE(32)] = 557,
  [SMALL_STATE(33)] = 570,
  [SMALL_STATE(34)] = 577,
  [SMALL_STATE(35)] = 584,
  [SMALL_STATE(36)] = 591,
  [SMALL_STATE(37)] = 604,
  [SMALL_STATE(38)] = 617,
  [SMALL_STATE(39)] = 627,
  [SMALL_STATE(40)] = 637,
  [SMALL_STATE(41)] = 647,
  [SMALL_STATE(42)] = 655,
  [SMALL_STATE(43)] = 661,
  [SMALL_STATE(44)] = 668,
  [SMALL_STATE(45)] = 673,
  [SMALL_STATE(46)] = 680,
  [SMALL_STATE(47)] = 687,
  [SMALL_STATE(48)] = 692,
  [SMALL_STATE(49)] = 699,
  [SMALL_STATE(50)] = 704,
  [SMALL_STATE(51)] = 711,
  [SMALL_STATE(52)] = 718,
  [SMALL_STATE(53)] = 725,
  [SMALL_STATE(54)] = 729,
  [SMALL_STATE(55)] = 733,
  [SMALL_STATE(56)] = 737,
  [SMALL_STATE(57)] = 741,
  [SMALL_STATE(58)] = 745,
  [SMALL_STATE(59)] = 749,
  [SMALL_STATE(60)] = 753,
  [SMALL_STATE(61)] = 757,
  [SMALL_STATE(62)] = 761,
  [SMALL_STATE(63)] = 765,
  [SMALL_STATE(64)] = 769,
  [SMALL_STATE(65)] = 773,
  [SMALL_STATE(66)] = 777,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_body, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_body, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_body, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_body_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_import, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_type, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_name, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
