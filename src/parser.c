#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 23
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_STAR_SLASH = 5,
  sym_type = 6,
  sym_variable = 7,
  anon_sym_DQUOTE = 8,
  sym_string_content = 9,
  sym_escape_sequence = 10,
  sym_number = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_EmailAndPassword = 14,
  anon_sym_PostgreSQL = 15,
  anon_sym_SQLite = 16,
  anon_sym_Simple = 17,
  anon_sym_PgBoss = 18,
  anon_sym_SMTP = 19,
  anon_sym_SendGrid = 20,
  anon_sym_Mailgun = 21,
  anon_sym_Dummy = 22,
  anon_sym_ALL = 23,
  anon_sym_GET = 24,
  anon_sym_POST = 25,
  anon_sym_PUT = 26,
  anon_sym_DELETE = 27,
  anon_sym_import = 28,
  anon_sym_from = 29,
  anon_sym_LBRACE = 30,
  anon_sym_COMMA = 31,
  anon_sym_RBRACE = 32,
  anon_sym_LBRACE_EQpsl = 33,
  aux_sym_prisma_closure_token1 = 34,
  anon_sym_psl_EQ_RBRACE = 35,
  anon_sym_LBRACE_EQjson = 36,
  anon_sym_json_EQ_RBRACE = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_COLON = 40,
  sym_source_file = 41,
  sym_definition = 42,
  sym_comment = 43,
  sym_value = 44,
  sym_string = 45,
  sym_constant = 46,
  sym_js_import = 47,
  sym_import_statement = 48,
  sym_prisma_closure = 49,
  sym_json_closure = 50,
  sym_array = 51,
  sym_dictionary = 52,
  sym_dict_entry = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_string_repeat1 = 55,
  aux_sym_import_statement_repeat1 = 56,
  aux_sym_prisma_closure_repeat1 = 57,
  aux_sym_array_repeat1 = 58,
  aux_sym_dictionary_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_type] = "type",
  [sym_variable] = "variable",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_EmailAndPassword] = "EmailAndPassword",
  [anon_sym_PostgreSQL] = "PostgreSQL",
  [anon_sym_SQLite] = "SQLite",
  [anon_sym_Simple] = "Simple",
  [anon_sym_PgBoss] = "PgBoss",
  [anon_sym_SMTP] = "SMTP",
  [anon_sym_SendGrid] = "SendGrid",
  [anon_sym_Mailgun] = "Mailgun",
  [anon_sym_Dummy] = "Dummy",
  [anon_sym_ALL] = "ALL",
  [anon_sym_GET] = "GET",
  [anon_sym_POST] = "POST",
  [anon_sym_PUT] = "PUT",
  [anon_sym_DELETE] = "DELETE",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_EQpsl] = "{=psl",
  [aux_sym_prisma_closure_token1] = "prisma_closure_token1",
  [anon_sym_psl_EQ_RBRACE] = "psl=}",
  [anon_sym_LBRACE_EQjson] = "{=json",
  [anon_sym_json_EQ_RBRACE] = "json=}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [sym_source_file] = "source_file",
  [sym_definition] = "definition",
  [sym_comment] = "comment",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_constant] = "constant",
  [sym_js_import] = "js_import",
  [sym_import_statement] = "import_statement",
  [sym_prisma_closure] = "prisma_closure",
  [sym_json_closure] = "json_closure",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_dict_entry] = "dict_entry",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_prisma_closure_repeat1] = "prisma_closure_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_type] = sym_type,
  [sym_variable] = sym_variable,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_EmailAndPassword] = anon_sym_EmailAndPassword,
  [anon_sym_PostgreSQL] = anon_sym_PostgreSQL,
  [anon_sym_SQLite] = anon_sym_SQLite,
  [anon_sym_Simple] = anon_sym_Simple,
  [anon_sym_PgBoss] = anon_sym_PgBoss,
  [anon_sym_SMTP] = anon_sym_SMTP,
  [anon_sym_SendGrid] = anon_sym_SendGrid,
  [anon_sym_Mailgun] = anon_sym_Mailgun,
  [anon_sym_Dummy] = anon_sym_Dummy,
  [anon_sym_ALL] = anon_sym_ALL,
  [anon_sym_GET] = anon_sym_GET,
  [anon_sym_POST] = anon_sym_POST,
  [anon_sym_PUT] = anon_sym_PUT,
  [anon_sym_DELETE] = anon_sym_DELETE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_EQpsl] = anon_sym_LBRACE_EQpsl,
  [aux_sym_prisma_closure_token1] = aux_sym_prisma_closure_token1,
  [anon_sym_psl_EQ_RBRACE] = anon_sym_psl_EQ_RBRACE,
  [anon_sym_LBRACE_EQjson] = anon_sym_LBRACE_EQjson,
  [anon_sym_json_EQ_RBRACE] = anon_sym_json_EQ_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_source_file] = sym_source_file,
  [sym_definition] = sym_definition,
  [sym_comment] = sym_comment,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_constant] = sym_constant,
  [sym_js_import] = sym_js_import,
  [sym_import_statement] = sym_import_statement,
  [sym_prisma_closure] = sym_prisma_closure,
  [sym_json_closure] = sym_json_closure,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_dict_entry] = sym_dict_entry,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [aux_sym_prisma_closure_repeat1] = aux_sym_prisma_closure_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
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
  [anon_sym_EmailAndPassword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PostgreSQL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQLite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Simple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PgBoss] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SMTP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SendGrid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mailgun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dummy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POST] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DELETE] = {
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
  [anon_sym_LBRACE_EQpsl] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prisma_closure_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_psl_EQ_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_EQjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json_EQ_RBRACE] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_js_import] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_prisma_closure] = {
    .visible = true,
    .named = true,
  },
  [sym_json_closure] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_entry] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prisma_closure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
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
  [59] = 59,
  [60] = 60,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(101);
      ADVANCE_MAP(
        '"', 231,
        '*', 7,
        ',', 274,
        '-', 96,
        '/', 3,
        ':', 291,
        'A', 121,
        'D', 116,
        'E', 182,
        'G', 114,
        'M', 136,
        'P', 125,
        'S', 124,
        '[', 289,
        '\\', 98,
        ']', 290,
        'a', 146,
        'c', 201,
        'e', 187,
        'f', 137,
        'i', 176,
        'j', 189,
        'p', 139,
        'q', 222,
        'r', 193,
        't', 207,
        '{', 273,
        '}', 275,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 231,
        '-', 96,
        'A', 17,
        'D', 12,
        'E', 62,
        'G', 10,
        'M', 32,
        'P', 21,
        'S', 20,
        '[', 289,
        ']', 290,
        'f', 33,
        'i', 57,
        't', 74,
        '{', 273,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(106);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '}') ADVANCE(275);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(69);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(267);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'G') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(259);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(243);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'Q') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'U') ADVANCE(28);
      if (lookahead == 'g') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 22:
      if (lookahead == 'P') ADVANCE(251);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'Q') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(261);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(265);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(263);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(241);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'j') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 94:
      if (lookahead == '}') ADVANCE(286);
      END_STATE();
    case 95:
      if (lookahead == '}') ADVANCE(288);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
      END_STATE();
    case 99:
      if (eof) ADVANCE(101);
      ADVANCE_MAP(
        '"', 231,
        '*', 7,
        ',', 274,
        '-', 96,
        '/', 3,
        ':', 291,
        'A', 121,
        'D', 116,
        'E', 182,
        'G', 114,
        'M', 136,
        'P', 125,
        'S', 124,
        '[', 289,
        ']', 290,
        'a', 146,
        'c', 201,
        'e', 187,
        'f', 137,
        'i', 176,
        'j', 189,
        'p', 139,
        'q', 222,
        'r', 193,
        't', 207,
        '{', 273,
        '}', 275,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 100:
      if (eof) ADVANCE(101);
      ADVANCE_MAP(
        '"', 231,
        ',', 274,
        '-', 96,
        '/', 3,
        'A', 121,
        'D', 116,
        'E', 182,
        'G', 114,
        'M', 136,
        'P', 125,
        'S', 124,
        '[', 289,
        ']', 290,
        'a', 146,
        'c', 201,
        'e', 187,
        'f', 138,
        'i', 176,
        'j', 190,
        'p', 140,
        'q', 222,
        'r', 193,
        't', 207,
        '{', 273,
        '}', 275,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_type);
      if (lookahead == 'N') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '=') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '=') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'A') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'B') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'G') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'M') ADVANCE(133);
      if (lookahead == 'Q') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'O') ADVANCE(130);
      if (lookahead == 'U') ADVANCE(132);
      if (lookahead == 'g') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'P') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'P') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'Q') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'S') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'S') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'w') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_EmailAndPassword);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_EmailAndPassword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PostgreSQL);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PostgreSQL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SQLite);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_SQLite);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Simple);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PgBoss);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PgBoss);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SMTP);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SMTP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SendGrid);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SendGrid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Mailgun);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_Mailgun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_Dummy);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Dummy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_ALL);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_ALL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQpsl);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == '=') ADVANCE(94);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 'j') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(284);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_psl_EQ_RBRACE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQjson);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_json_EQ_RBRACE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 100},
  [2] = {.lex_state = 100},
  [3] = {.lex_state = 100},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 100},
  [6] = {.lex_state = 100},
  [7] = {.lex_state = 100},
  [8] = {.lex_state = 100},
  [9] = {.lex_state = 100},
  [10] = {.lex_state = 100},
  [11] = {.lex_state = 100},
  [12] = {.lex_state = 100},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 100},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 100},
  [17] = {.lex_state = 100},
  [18] = {.lex_state = 100},
  [19] = {.lex_state = 100},
  [20] = {.lex_state = 100},
  [21] = {.lex_state = 100},
  [22] = {.lex_state = 100},
  [23] = {.lex_state = 100},
  [24] = {.lex_state = 100},
  [25] = {.lex_state = 100},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 279},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 279},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 279},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 279},
  [42] = {.lex_state = 279},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 103},
  [60] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_EmailAndPassword] = ACTIONS(1),
    [anon_sym_PostgreSQL] = ACTIONS(1),
    [anon_sym_SQLite] = ACTIONS(1),
    [anon_sym_Simple] = ACTIONS(1),
    [anon_sym_PgBoss] = ACTIONS(1),
    [anon_sym_SMTP] = ACTIONS(1),
    [anon_sym_SendGrid] = ACTIONS(1),
    [anon_sym_Mailgun] = ACTIONS(1),
    [anon_sym_Dummy] = ACTIONS(1),
    [anon_sym_ALL] = ACTIONS(1),
    [anon_sym_GET] = ACTIONS(1),
    [anon_sym_POST] = ACTIONS(1),
    [anon_sym_PUT] = ACTIONS(1),
    [anon_sym_DELETE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(1),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_EQjson] = ACTIONS(1),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym_definition] = STATE(2),
    [sym_comment] = STATE(24),
    [sym_value] = STATE(24),
    [sym_string] = STATE(7),
    [sym_constant] = STATE(7),
    [sym_js_import] = STATE(7),
    [sym_prisma_closure] = STATE(7),
    [sym_json_closure] = STATE(7),
    [sym_array] = STATE(7),
    [sym_dictionary] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type] = ACTIONS(9),
    [sym_variable] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_EmailAndPassword] = ACTIONS(15),
    [anon_sym_PostgreSQL] = ACTIONS(15),
    [anon_sym_SQLite] = ACTIONS(15),
    [anon_sym_Simple] = ACTIONS(15),
    [anon_sym_PgBoss] = ACTIONS(15),
    [anon_sym_SMTP] = ACTIONS(15),
    [anon_sym_SendGrid] = ACTIONS(15),
    [anon_sym_Mailgun] = ACTIONS(15),
    [anon_sym_Dummy] = ACTIONS(15),
    [anon_sym_ALL] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(15),
    [anon_sym_POST] = ACTIONS(15),
    [anon_sym_PUT] = ACTIONS(15),
    [anon_sym_DELETE] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [2] = {
    [sym_definition] = STATE(3),
    [sym_comment] = STATE(24),
    [sym_value] = STATE(24),
    [sym_string] = STATE(7),
    [sym_constant] = STATE(7),
    [sym_js_import] = STATE(7),
    [sym_prisma_closure] = STATE(7),
    [sym_json_closure] = STATE(7),
    [sym_array] = STATE(7),
    [sym_dictionary] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type] = ACTIONS(9),
    [sym_variable] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(15),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_EmailAndPassword] = ACTIONS(15),
    [anon_sym_PostgreSQL] = ACTIONS(15),
    [anon_sym_SQLite] = ACTIONS(15),
    [anon_sym_Simple] = ACTIONS(15),
    [anon_sym_PgBoss] = ACTIONS(15),
    [anon_sym_SMTP] = ACTIONS(15),
    [anon_sym_SendGrid] = ACTIONS(15),
    [anon_sym_Mailgun] = ACTIONS(15),
    [anon_sym_Dummy] = ACTIONS(15),
    [anon_sym_ALL] = ACTIONS(15),
    [anon_sym_GET] = ACTIONS(15),
    [anon_sym_POST] = ACTIONS(15),
    [anon_sym_PUT] = ACTIONS(15),
    [anon_sym_DELETE] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [3] = {
    [sym_definition] = STATE(3),
    [sym_comment] = STATE(24),
    [sym_value] = STATE(24),
    [sym_string] = STATE(7),
    [sym_constant] = STATE(7),
    [sym_js_import] = STATE(7),
    [sym_prisma_closure] = STATE(7),
    [sym_json_closure] = STATE(7),
    [sym_array] = STATE(7),
    [sym_dictionary] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(34),
    [sym_type] = ACTIONS(37),
    [sym_variable] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym_number] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
    [anon_sym_EmailAndPassword] = ACTIONS(46),
    [anon_sym_PostgreSQL] = ACTIONS(46),
    [anon_sym_SQLite] = ACTIONS(46),
    [anon_sym_Simple] = ACTIONS(46),
    [anon_sym_PgBoss] = ACTIONS(46),
    [anon_sym_SMTP] = ACTIONS(46),
    [anon_sym_SendGrid] = ACTIONS(46),
    [anon_sym_Mailgun] = ACTIONS(46),
    [anon_sym_Dummy] = ACTIONS(46),
    [anon_sym_ALL] = ACTIONS(46),
    [anon_sym_GET] = ACTIONS(46),
    [anon_sym_POST] = ACTIONS(46),
    [anon_sym_PUT] = ACTIONS(46),
    [anon_sym_DELETE] = ACTIONS(46),
    [anon_sym_import] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(52),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(55),
    [anon_sym_LBRACE_EQjson] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(61),
  },
  [4] = {
    [sym_value] = STATE(44),
    [sym_string] = STATE(7),
    [sym_constant] = STATE(7),
    [sym_js_import] = STATE(7),
    [sym_prisma_closure] = STATE(7),
    [sym_json_closure] = STATE(7),
    [sym_array] = STATE(7),
    [sym_dictionary] = STATE(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [anon_sym_EmailAndPassword] = ACTIONS(64),
    [anon_sym_PostgreSQL] = ACTIONS(64),
    [anon_sym_SQLite] = ACTIONS(64),
    [anon_sym_Simple] = ACTIONS(64),
    [anon_sym_PgBoss] = ACTIONS(64),
    [anon_sym_SMTP] = ACTIONS(64),
    [anon_sym_SendGrid] = ACTIONS(64),
    [anon_sym_Mailgun] = ACTIONS(64),
    [anon_sym_Dummy] = ACTIONS(64),
    [anon_sym_ALL] = ACTIONS(64),
    [anon_sym_GET] = ACTIONS(64),
    [anon_sym_POST] = ACTIONS(64),
    [anon_sym_PUT] = ACTIONS(64),
    [anon_sym_DELETE] = ACTIONS(64),
    [anon_sym_import] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(68),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [anon_sym_SLASH_SLASH] = ACTIONS(70),
    [anon_sym_SLASH_STAR] = ACTIONS(70),
    [sym_type] = ACTIONS(72),
    [sym_variable] = ACTIONS(72),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [sym_number] = ACTIONS(70),
    [anon_sym_true] = ACTIONS(72),
    [anon_sym_false] = ACTIONS(72),
    [anon_sym_EmailAndPassword] = ACTIONS(72),
    [anon_sym_PostgreSQL] = ACTIONS(72),
    [anon_sym_SQLite] = ACTIONS(72),
    [anon_sym_Simple] = ACTIONS(72),
    [anon_sym_PgBoss] = ACTIONS(72),
    [anon_sym_SMTP] = ACTIONS(72),
    [anon_sym_SendGrid] = ACTIONS(72),
    [anon_sym_Mailgun] = ACTIONS(72),
    [anon_sym_Dummy] = ACTIONS(72),
    [anon_sym_ALL] = ACTIONS(72),
    [anon_sym_GET] = ACTIONS(72),
    [anon_sym_POST] = ACTIONS(72),
    [anon_sym_PUT] = ACTIONS(72),
    [anon_sym_DELETE] = ACTIONS(72),
    [anon_sym_import] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(70),
    [anon_sym_LBRACE_EQjson] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(70),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_STAR] = ACTIONS(74),
    [sym_type] = ACTIONS(76),
    [sym_variable] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [sym_number] = ACTIONS(74),
    [anon_sym_true] = ACTIONS(76),
    [anon_sym_false] = ACTIONS(76),
    [anon_sym_EmailAndPassword] = ACTIONS(76),
    [anon_sym_PostgreSQL] = ACTIONS(76),
    [anon_sym_SQLite] = ACTIONS(76),
    [anon_sym_Simple] = ACTIONS(76),
    [anon_sym_PgBoss] = ACTIONS(76),
    [anon_sym_SMTP] = ACTIONS(76),
    [anon_sym_SendGrid] = ACTIONS(76),
    [anon_sym_Mailgun] = ACTIONS(76),
    [anon_sym_Dummy] = ACTIONS(76),
    [anon_sym_ALL] = ACTIONS(76),
    [anon_sym_GET] = ACTIONS(76),
    [anon_sym_POST] = ACTIONS(76),
    [anon_sym_PUT] = ACTIONS(76),
    [anon_sym_DELETE] = ACTIONS(76),
    [anon_sym_import] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(74),
    [anon_sym_LBRACE_EQjson] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_STAR] = ACTIONS(78),
    [sym_type] = ACTIONS(80),
    [sym_variable] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_number] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_EmailAndPassword] = ACTIONS(80),
    [anon_sym_PostgreSQL] = ACTIONS(80),
    [anon_sym_SQLite] = ACTIONS(80),
    [anon_sym_Simple] = ACTIONS(80),
    [anon_sym_PgBoss] = ACTIONS(80),
    [anon_sym_SMTP] = ACTIONS(80),
    [anon_sym_SendGrid] = ACTIONS(80),
    [anon_sym_Mailgun] = ACTIONS(80),
    [anon_sym_Dummy] = ACTIONS(80),
    [anon_sym_ALL] = ACTIONS(80),
    [anon_sym_GET] = ACTIONS(80),
    [anon_sym_POST] = ACTIONS(80),
    [anon_sym_PUT] = ACTIONS(80),
    [anon_sym_DELETE] = ACTIONS(80),
    [anon_sym_import] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(78),
    [anon_sym_LBRACE_EQjson] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_STAR] = ACTIONS(82),
    [sym_type] = ACTIONS(84),
    [sym_variable] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [sym_number] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_EmailAndPassword] = ACTIONS(84),
    [anon_sym_PostgreSQL] = ACTIONS(84),
    [anon_sym_SQLite] = ACTIONS(84),
    [anon_sym_Simple] = ACTIONS(84),
    [anon_sym_PgBoss] = ACTIONS(84),
    [anon_sym_SMTP] = ACTIONS(84),
    [anon_sym_SendGrid] = ACTIONS(84),
    [anon_sym_Mailgun] = ACTIONS(84),
    [anon_sym_Dummy] = ACTIONS(84),
    [anon_sym_ALL] = ACTIONS(84),
    [anon_sym_GET] = ACTIONS(84),
    [anon_sym_POST] = ACTIONS(84),
    [anon_sym_PUT] = ACTIONS(84),
    [anon_sym_DELETE] = ACTIONS(84),
    [anon_sym_import] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(82),
    [anon_sym_LBRACE_EQjson] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_SLASH_SLASH] = ACTIONS(86),
    [anon_sym_SLASH_STAR] = ACTIONS(86),
    [sym_type] = ACTIONS(88),
    [sym_variable] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [sym_number] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [anon_sym_EmailAndPassword] = ACTIONS(88),
    [anon_sym_PostgreSQL] = ACTIONS(88),
    [anon_sym_SQLite] = ACTIONS(88),
    [anon_sym_Simple] = ACTIONS(88),
    [anon_sym_PgBoss] = ACTIONS(88),
    [anon_sym_SMTP] = ACTIONS(88),
    [anon_sym_SendGrid] = ACTIONS(88),
    [anon_sym_Mailgun] = ACTIONS(88),
    [anon_sym_Dummy] = ACTIONS(88),
    [anon_sym_ALL] = ACTIONS(88),
    [anon_sym_GET] = ACTIONS(88),
    [anon_sym_POST] = ACTIONS(88),
    [anon_sym_PUT] = ACTIONS(88),
    [anon_sym_DELETE] = ACTIONS(88),
    [anon_sym_import] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(86),
    [anon_sym_LBRACE_EQjson] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_SLASH_SLASH] = ACTIONS(90),
    [anon_sym_SLASH_STAR] = ACTIONS(90),
    [sym_type] = ACTIONS(92),
    [sym_variable] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_number] = ACTIONS(90),
    [anon_sym_true] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(92),
    [anon_sym_EmailAndPassword] = ACTIONS(92),
    [anon_sym_PostgreSQL] = ACTIONS(92),
    [anon_sym_SQLite] = ACTIONS(92),
    [anon_sym_Simple] = ACTIONS(92),
    [anon_sym_PgBoss] = ACTIONS(92),
    [anon_sym_SMTP] = ACTIONS(92),
    [anon_sym_SendGrid] = ACTIONS(92),
    [anon_sym_Mailgun] = ACTIONS(92),
    [anon_sym_Dummy] = ACTIONS(92),
    [anon_sym_ALL] = ACTIONS(92),
    [anon_sym_GET] = ACTIONS(92),
    [anon_sym_POST] = ACTIONS(92),
    [anon_sym_PUT] = ACTIONS(92),
    [anon_sym_DELETE] = ACTIONS(92),
    [anon_sym_import] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(90),
    [anon_sym_LBRACE_EQjson] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_SLASH_SLASH] = ACTIONS(94),
    [anon_sym_SLASH_STAR] = ACTIONS(94),
    [sym_type] = ACTIONS(96),
    [sym_variable] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_number] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(96),
    [anon_sym_EmailAndPassword] = ACTIONS(96),
    [anon_sym_PostgreSQL] = ACTIONS(96),
    [anon_sym_SQLite] = ACTIONS(96),
    [anon_sym_Simple] = ACTIONS(96),
    [anon_sym_PgBoss] = ACTIONS(96),
    [anon_sym_SMTP] = ACTIONS(96),
    [anon_sym_SendGrid] = ACTIONS(96),
    [anon_sym_Mailgun] = ACTIONS(96),
    [anon_sym_Dummy] = ACTIONS(96),
    [anon_sym_ALL] = ACTIONS(96),
    [anon_sym_GET] = ACTIONS(96),
    [anon_sym_POST] = ACTIONS(96),
    [anon_sym_PUT] = ACTIONS(96),
    [anon_sym_DELETE] = ACTIONS(96),
    [anon_sym_import] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(94),
    [anon_sym_LBRACE_EQjson] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_SLASH_SLASH] = ACTIONS(98),
    [anon_sym_SLASH_STAR] = ACTIONS(98),
    [sym_type] = ACTIONS(100),
    [sym_variable] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym_number] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_EmailAndPassword] = ACTIONS(100),
    [anon_sym_PostgreSQL] = ACTIONS(100),
    [anon_sym_SQLite] = ACTIONS(100),
    [anon_sym_Simple] = ACTIONS(100),
    [anon_sym_PgBoss] = ACTIONS(100),
    [anon_sym_SMTP] = ACTIONS(100),
    [anon_sym_SendGrid] = ACTIONS(100),
    [anon_sym_Mailgun] = ACTIONS(100),
    [anon_sym_Dummy] = ACTIONS(100),
    [anon_sym_ALL] = ACTIONS(100),
    [anon_sym_GET] = ACTIONS(100),
    [anon_sym_POST] = ACTIONS(100),
    [anon_sym_PUT] = ACTIONS(100),
    [anon_sym_DELETE] = ACTIONS(100),
    [anon_sym_import] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(98),
    [anon_sym_LBRACE_EQjson] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
  },
  [13] = {
    [sym_value] = STATE(50),
    [sym_string] = STATE(7),
    [sym_constant] = STATE(7),
    [sym_js_import] = STATE(7),
    [sym_prisma_closure] = STATE(7),
    [sym_json_closure] = STATE(7),
    [sym_array] = STATE(7),
    [sym_dictionary] = STATE(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [anon_sym_EmailAndPassword] = ACTIONS(64),
    [anon_sym_PostgreSQL] = ACTIONS(64),
    [anon_sym_SQLite] = ACTIONS(64),
    [anon_sym_Simple] = ACTIONS(64),
    [anon_sym_PgBoss] = ACTIONS(64),
    [anon_sym_SMTP] = ACTIONS(64),
    [anon_sym_SendGrid] = ACTIONS(64),
    [anon_sym_Mailgun] = ACTIONS(64),
    [anon_sym_Dummy] = ACTIONS(64),
    [anon_sym_ALL] = ACTIONS(64),
    [anon_sym_GET] = ACTIONS(64),
    [anon_sym_POST] = ACTIONS(64),
    [anon_sym_PUT] = ACTIONS(64),
    [anon_sym_DELETE] = ACTIONS(64),
    [anon_sym_import] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_STAR] = ACTIONS(102),
    [sym_type] = ACTIONS(104),
    [sym_variable] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym_number] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(104),
    [anon_sym_EmailAndPassword] = ACTIONS(104),
    [anon_sym_PostgreSQL] = ACTIONS(104),
    [anon_sym_SQLite] = ACTIONS(104),
    [anon_sym_Simple] = ACTIONS(104),
    [anon_sym_PgBoss] = ACTIONS(104),
    [anon_sym_SMTP] = ACTIONS(104),
    [anon_sym_SendGrid] = ACTIONS(104),
    [anon_sym_Mailgun] = ACTIONS(104),
    [anon_sym_Dummy] = ACTIONS(104),
    [anon_sym_ALL] = ACTIONS(104),
    [anon_sym_GET] = ACTIONS(104),
    [anon_sym_POST] = ACTIONS(104),
    [anon_sym_PUT] = ACTIONS(104),
    [anon_sym_DELETE] = ACTIONS(104),
    [anon_sym_import] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(102),
    [anon_sym_LBRACE_EQjson] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(102),
  },
  [15] = {
    [sym_value] = STATE(52),
    [sym_string] = STATE(7),
    [sym_constant] = STATE(7),
    [sym_js_import] = STATE(7),
    [sym_prisma_closure] = STATE(7),
    [sym_json_closure] = STATE(7),
    [sym_array] = STATE(7),
    [sym_dictionary] = STATE(7),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [anon_sym_EmailAndPassword] = ACTIONS(64),
    [anon_sym_PostgreSQL] = ACTIONS(64),
    [anon_sym_SQLite] = ACTIONS(64),
    [anon_sym_Simple] = ACTIONS(64),
    [anon_sym_PgBoss] = ACTIONS(64),
    [anon_sym_SMTP] = ACTIONS(64),
    [anon_sym_SendGrid] = ACTIONS(64),
    [anon_sym_Mailgun] = ACTIONS(64),
    [anon_sym_Dummy] = ACTIONS(64),
    [anon_sym_ALL] = ACTIONS(64),
    [anon_sym_GET] = ACTIONS(64),
    [anon_sym_POST] = ACTIONS(64),
    [anon_sym_PUT] = ACTIONS(64),
    [anon_sym_DELETE] = ACTIONS(64),
    [anon_sym_import] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(21),
    [anon_sym_LBRACE_EQjson] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_STAR] = ACTIONS(106),
    [sym_type] = ACTIONS(108),
    [sym_variable] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym_number] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_EmailAndPassword] = ACTIONS(108),
    [anon_sym_PostgreSQL] = ACTIONS(108),
    [anon_sym_SQLite] = ACTIONS(108),
    [anon_sym_Simple] = ACTIONS(108),
    [anon_sym_PgBoss] = ACTIONS(108),
    [anon_sym_SMTP] = ACTIONS(108),
    [anon_sym_SendGrid] = ACTIONS(108),
    [anon_sym_Mailgun] = ACTIONS(108),
    [anon_sym_Dummy] = ACTIONS(108),
    [anon_sym_ALL] = ACTIONS(108),
    [anon_sym_GET] = ACTIONS(108),
    [anon_sym_POST] = ACTIONS(108),
    [anon_sym_PUT] = ACTIONS(108),
    [anon_sym_DELETE] = ACTIONS(108),
    [anon_sym_import] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(106),
    [anon_sym_LBRACE_EQjson] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(106),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_SLASH_STAR] = ACTIONS(110),
    [sym_type] = ACTIONS(112),
    [sym_variable] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(112),
    [anon_sym_EmailAndPassword] = ACTIONS(112),
    [anon_sym_PostgreSQL] = ACTIONS(112),
    [anon_sym_SQLite] = ACTIONS(112),
    [anon_sym_Simple] = ACTIONS(112),
    [anon_sym_PgBoss] = ACTIONS(112),
    [anon_sym_SMTP] = ACTIONS(112),
    [anon_sym_SendGrid] = ACTIONS(112),
    [anon_sym_Mailgun] = ACTIONS(112),
    [anon_sym_Dummy] = ACTIONS(112),
    [anon_sym_ALL] = ACTIONS(112),
    [anon_sym_GET] = ACTIONS(112),
    [anon_sym_POST] = ACTIONS(112),
    [anon_sym_PUT] = ACTIONS(112),
    [anon_sym_DELETE] = ACTIONS(112),
    [anon_sym_import] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(110),
    [anon_sym_LBRACE_EQjson] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_SLASH_SLASH] = ACTIONS(114),
    [anon_sym_SLASH_STAR] = ACTIONS(114),
    [sym_type] = ACTIONS(116),
    [sym_variable] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [sym_number] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(116),
    [anon_sym_false] = ACTIONS(116),
    [anon_sym_EmailAndPassword] = ACTIONS(116),
    [anon_sym_PostgreSQL] = ACTIONS(116),
    [anon_sym_SQLite] = ACTIONS(116),
    [anon_sym_Simple] = ACTIONS(116),
    [anon_sym_PgBoss] = ACTIONS(116),
    [anon_sym_SMTP] = ACTIONS(116),
    [anon_sym_SendGrid] = ACTIONS(116),
    [anon_sym_Mailgun] = ACTIONS(116),
    [anon_sym_Dummy] = ACTIONS(116),
    [anon_sym_ALL] = ACTIONS(116),
    [anon_sym_GET] = ACTIONS(116),
    [anon_sym_POST] = ACTIONS(116),
    [anon_sym_PUT] = ACTIONS(116),
    [anon_sym_DELETE] = ACTIONS(116),
    [anon_sym_import] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(114),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(114),
    [anon_sym_LBRACE_EQjson] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(114),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_SLASH_SLASH] = ACTIONS(118),
    [anon_sym_SLASH_STAR] = ACTIONS(118),
    [sym_type] = ACTIONS(120),
    [sym_variable] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym_number] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(120),
    [anon_sym_EmailAndPassword] = ACTIONS(120),
    [anon_sym_PostgreSQL] = ACTIONS(120),
    [anon_sym_SQLite] = ACTIONS(120),
    [anon_sym_Simple] = ACTIONS(120),
    [anon_sym_PgBoss] = ACTIONS(120),
    [anon_sym_SMTP] = ACTIONS(120),
    [anon_sym_SendGrid] = ACTIONS(120),
    [anon_sym_Mailgun] = ACTIONS(120),
    [anon_sym_Dummy] = ACTIONS(120),
    [anon_sym_ALL] = ACTIONS(120),
    [anon_sym_GET] = ACTIONS(120),
    [anon_sym_POST] = ACTIONS(120),
    [anon_sym_PUT] = ACTIONS(120),
    [anon_sym_DELETE] = ACTIONS(120),
    [anon_sym_import] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_RBRACE] = ACTIONS(118),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(118),
    [anon_sym_LBRACE_EQjson] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [anon_sym_SLASH_SLASH] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(122),
    [sym_type] = ACTIONS(124),
    [sym_variable] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [sym_number] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(124),
    [anon_sym_false] = ACTIONS(124),
    [anon_sym_EmailAndPassword] = ACTIONS(124),
    [anon_sym_PostgreSQL] = ACTIONS(124),
    [anon_sym_SQLite] = ACTIONS(124),
    [anon_sym_Simple] = ACTIONS(124),
    [anon_sym_PgBoss] = ACTIONS(124),
    [anon_sym_SMTP] = ACTIONS(124),
    [anon_sym_SendGrid] = ACTIONS(124),
    [anon_sym_Mailgun] = ACTIONS(124),
    [anon_sym_Dummy] = ACTIONS(124),
    [anon_sym_ALL] = ACTIONS(124),
    [anon_sym_GET] = ACTIONS(124),
    [anon_sym_POST] = ACTIONS(124),
    [anon_sym_PUT] = ACTIONS(124),
    [anon_sym_DELETE] = ACTIONS(124),
    [anon_sym_import] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_RBRACE] = ACTIONS(122),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(122),
    [anon_sym_LBRACE_EQjson] = ACTIONS(122),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(122),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(126),
    [sym_type] = ACTIONS(128),
    [sym_variable] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [sym_number] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(128),
    [anon_sym_false] = ACTIONS(128),
    [anon_sym_EmailAndPassword] = ACTIONS(128),
    [anon_sym_PostgreSQL] = ACTIONS(128),
    [anon_sym_SQLite] = ACTIONS(128),
    [anon_sym_Simple] = ACTIONS(128),
    [anon_sym_PgBoss] = ACTIONS(128),
    [anon_sym_SMTP] = ACTIONS(128),
    [anon_sym_SendGrid] = ACTIONS(128),
    [anon_sym_Mailgun] = ACTIONS(128),
    [anon_sym_Dummy] = ACTIONS(128),
    [anon_sym_ALL] = ACTIONS(128),
    [anon_sym_GET] = ACTIONS(128),
    [anon_sym_POST] = ACTIONS(128),
    [anon_sym_PUT] = ACTIONS(128),
    [anon_sym_DELETE] = ACTIONS(128),
    [anon_sym_import] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(126),
    [anon_sym_LBRACE_EQjson] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_SLASH_SLASH] = ACTIONS(130),
    [anon_sym_SLASH_STAR] = ACTIONS(130),
    [sym_type] = ACTIONS(132),
    [sym_variable] = ACTIONS(132),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym_number] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_false] = ACTIONS(132),
    [anon_sym_EmailAndPassword] = ACTIONS(132),
    [anon_sym_PostgreSQL] = ACTIONS(132),
    [anon_sym_SQLite] = ACTIONS(132),
    [anon_sym_Simple] = ACTIONS(132),
    [anon_sym_PgBoss] = ACTIONS(132),
    [anon_sym_SMTP] = ACTIONS(132),
    [anon_sym_SendGrid] = ACTIONS(132),
    [anon_sym_Mailgun] = ACTIONS(132),
    [anon_sym_Dummy] = ACTIONS(132),
    [anon_sym_ALL] = ACTIONS(132),
    [anon_sym_GET] = ACTIONS(132),
    [anon_sym_POST] = ACTIONS(132),
    [anon_sym_PUT] = ACTIONS(132),
    [anon_sym_DELETE] = ACTIONS(132),
    [anon_sym_import] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(130),
    [anon_sym_LBRACE_EQjson] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(130),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
    ACTIONS(136), 20,
      sym_type,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_EmailAndPassword,
      anon_sym_PostgreSQL,
      anon_sym_SQLite,
      anon_sym_Simple,
      anon_sym_PgBoss,
      anon_sym_SMTP,
      anon_sym_SendGrid,
      anon_sym_Mailgun,
      anon_sym_Dummy,
      anon_sym_ALL,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_import,
      anon_sym_LBRACE,
  [33] = 2,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
    ACTIONS(140), 20,
      sym_type,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_EmailAndPassword,
      anon_sym_PostgreSQL,
      anon_sym_SQLite,
      anon_sym_Simple,
      anon_sym_PgBoss,
      anon_sym_SMTP,
      anon_sym_SendGrid,
      anon_sym_Mailgun,
      anon_sym_Dummy,
      anon_sym_ALL,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_import,
      anon_sym_LBRACE,
  [66] = 2,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
    ACTIONS(144), 20,
      sym_type,
      sym_variable,
      anon_sym_true,
      anon_sym_false,
      anon_sym_EmailAndPassword,
      anon_sym_PostgreSQL,
      anon_sym_SQLite,
      anon_sym_Simple,
      anon_sym_PgBoss,
      anon_sym_SMTP,
      anon_sym_SendGrid,
      anon_sym_Mailgun,
      anon_sym_Dummy,
      anon_sym_ALL,
      anon_sym_GET,
      anon_sym_POST,
      anon_sym_PUT,
      anon_sym_DELETE,
      anon_sym_import,
      anon_sym_LBRACE,
  [99] = 3,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_string_repeat1,
    ACTIONS(148), 2,
      sym_string_content,
      sym_escape_sequence,
  [110] = 3,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat1,
    ACTIONS(152), 2,
      sym_string_content,
      sym_escape_sequence,
  [121] = 3,
    ACTIONS(154), 1,
      aux_sym_prisma_closure_token1,
    STATE(28), 1,
      aux_sym_prisma_closure_repeat1,
    ACTIONS(157), 2,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_json_EQ_RBRACE,
  [132] = 3,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      aux_sym_string_repeat1,
    ACTIONS(161), 2,
      sym_string_content,
      sym_escape_sequence,
  [143] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_array_repeat1,
  [153] = 3,
    ACTIONS(168), 1,
      anon_sym_from,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_import_statement,
  [163] = 3,
    ACTIONS(172), 1,
      sym_variable,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_dict_entry,
  [173] = 2,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(176), 2,
      sym_variable,
      anon_sym_RBRACE,
  [181] = 3,
    ACTIONS(180), 1,
      aux_sym_prisma_closure_token1,
    ACTIONS(182), 1,
      anon_sym_psl_EQ_RBRACE,
    STATE(41), 1,
      aux_sym_prisma_closure_repeat1,
  [191] = 3,
    ACTIONS(184), 1,
      sym_variable,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_import_statement_repeat1,
  [201] = 3,
    ACTIONS(184), 1,
      sym_variable,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_import_statement_repeat1,
  [211] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_dictionary_repeat1,
  [221] = 3,
    ACTIONS(194), 1,
      aux_sym_prisma_closure_token1,
    ACTIONS(196), 1,
      anon_sym_json_EQ_RBRACE,
    STATE(42), 1,
      aux_sym_prisma_closure_repeat1,
  [231] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_dictionary_repeat1,
  [241] = 3,
    ACTIONS(200), 1,
      sym_variable,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      aux_sym_import_statement_repeat1,
  [251] = 3,
    ACTIONS(205), 1,
      aux_sym_prisma_closure_token1,
    ACTIONS(207), 1,
      anon_sym_psl_EQ_RBRACE,
    STATE(28), 1,
      aux_sym_prisma_closure_repeat1,
  [261] = 3,
    ACTIONS(205), 1,
      aux_sym_prisma_closure_token1,
    ACTIONS(209), 1,
      anon_sym_json_EQ_RBRACE,
    STATE(28), 1,
      aux_sym_prisma_closure_repeat1,
  [271] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_dictionary_repeat1,
  [281] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_array_repeat1,
  [291] = 3,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_array_repeat1,
  [301] = 2,
    ACTIONS(172), 1,
      sym_variable,
    STATE(51), 1,
      sym_dict_entry,
  [308] = 2,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_string,
  [315] = 2,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_string,
  [322] = 1,
    ACTIONS(203), 2,
      sym_variable,
      anon_sym_RBRACE,
  [327] = 1,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [332] = 1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [337] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [342] = 1,
    ACTIONS(225), 1,
      anon_sym_STAR_SLASH,
  [346] = 1,
    ACTIONS(227), 1,
      anon_sym_from,
  [350] = 1,
    ACTIONS(229), 1,
      anon_sym_from,
  [354] = 1,
    ACTIONS(231), 1,
      anon_sym_COLON,
  [358] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [362] = 1,
    ACTIONS(235), 1,
      aux_sym_comment_token2,
  [366] = 1,
    ACTIONS(237), 1,
      aux_sym_comment_token1,
  [370] = 1,
    ACTIONS(239), 1,
      anon_sym_from,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(23)] = 0,
  [SMALL_STATE(24)] = 33,
  [SMALL_STATE(25)] = 66,
  [SMALL_STATE(26)] = 99,
  [SMALL_STATE(27)] = 110,
  [SMALL_STATE(28)] = 121,
  [SMALL_STATE(29)] = 132,
  [SMALL_STATE(30)] = 143,
  [SMALL_STATE(31)] = 153,
  [SMALL_STATE(32)] = 163,
  [SMALL_STATE(33)] = 173,
  [SMALL_STATE(34)] = 181,
  [SMALL_STATE(35)] = 191,
  [SMALL_STATE(36)] = 201,
  [SMALL_STATE(37)] = 211,
  [SMALL_STATE(38)] = 221,
  [SMALL_STATE(39)] = 231,
  [SMALL_STATE(40)] = 241,
  [SMALL_STATE(41)] = 251,
  [SMALL_STATE(42)] = 261,
  [SMALL_STATE(43)] = 271,
  [SMALL_STATE(44)] = 281,
  [SMALL_STATE(45)] = 291,
  [SMALL_STATE(46)] = 301,
  [SMALL_STATE(47)] = 308,
  [SMALL_STATE(48)] = 315,
  [SMALL_STATE(49)] = 322,
  [SMALL_STATE(50)] = 327,
  [SMALL_STATE(51)] = 332,
  [SMALL_STATE(52)] = 337,
  [SMALL_STATE(53)] = 342,
  [SMALL_STATE(54)] = 346,
  [SMALL_STATE(55)] = 350,
  [SMALL_STATE(56)] = 354,
  [SMALL_STATE(57)] = 358,
  [SMALL_STATE(58)] = 362,
  [SMALL_STATE(59)] = 366,
  [SMALL_STATE(60)] = 370,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_closure, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_closure, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_closure, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_closure, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 4, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_closure, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_closure, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_closure, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_closure, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prisma_closure_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prisma_closure_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entry, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 3, 0, 0),
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
