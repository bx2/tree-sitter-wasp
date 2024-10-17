#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SLASH_SLASH = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym_comment_token2 = 4,
  anon_sym_STAR_SLASH = 5,
  sym_declaration_type = 6,
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
  anon_sym_COMMA = 29,
  anon_sym_from = 30,
  anon_sym_LBRACE = 31,
  anon_sym_as = 32,
  anon_sym_RBRACE = 33,
  anon_sym_LBRACE_EQpsl = 34,
  aux_sym_prisma_closure_token1 = 35,
  anon_sym_psl_EQ_RBRACE = 36,
  anon_sym_LBRACE_EQjson = 37,
  anon_sym_json_EQ_RBRACE = 38,
  anon_sym_LBRACK = 39,
  anon_sym_RBRACK = 40,
  anon_sym_COLON = 41,
  sym_source_file = 42,
  sym_declaration = 43,
  sym_comment = 44,
  sym_key = 45,
  sym_value = 46,
  sym_string = 47,
  sym_constant = 48,
  sym_js_import = 49,
  sym_default_import = 50,
  sym_named_import = 51,
  sym_alias = 52,
  sym_prisma_closure = 53,
  sym_json_closure = 54,
  sym_array = 55,
  sym_dictionary = 56,
  sym_dict_entry = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_string_repeat1 = 59,
  aux_sym_named_import_repeat1 = 60,
  aux_sym_prisma_closure_repeat1 = 61,
  aux_sym_array_repeat1 = 62,
  aux_sym_dictionary_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_declaration_type] = "declaration_type",
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
  [anon_sym_COMMA] = ",",
  [anon_sym_from] = "from",
  [anon_sym_LBRACE] = "{",
  [anon_sym_as] = "as",
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
  [sym_declaration] = "declaration",
  [sym_comment] = "comment",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_constant] = "constant",
  [sym_js_import] = "js_import",
  [sym_default_import] = "default_import",
  [sym_named_import] = "named_import",
  [sym_alias] = "alias",
  [sym_prisma_closure] = "prisma_closure",
  [sym_json_closure] = "json_closure",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_dict_entry] = "dict_entry",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_named_import_repeat1] = "named_import_repeat1",
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
  [sym_declaration_type] = sym_declaration_type,
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_as] = anon_sym_as,
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
  [sym_declaration] = sym_declaration,
  [sym_comment] = sym_comment,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_constant] = sym_constant,
  [sym_js_import] = sym_js_import,
  [sym_default_import] = sym_default_import,
  [sym_named_import] = sym_named_import,
  [sym_alias] = sym_alias,
  [sym_prisma_closure] = sym_prisma_closure,
  [sym_json_closure] = sym_json_closure,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_dict_entry] = sym_dict_entry,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_named_import_repeat1] = aux_sym_named_import_repeat1,
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
  [sym_declaration_type] = {
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
  [anon_sym_COMMA] = {
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
  [anon_sym_as] = {
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
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
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
  [aux_sym_named_import_repeat1] = {
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '"', 234,
        '*', 8,
        ',', 274,
        '-', 97,
        '/', 3,
        ':', 296,
        'A', 122,
        'D', 117,
        'E', 184,
        'G', 115,
        'M', 137,
        'P', 126,
        'S', 125,
        '[', 294,
        '\\', 99,
        ']', 295,
        'a', 147,
        'c', 203,
        'e', 189,
        'f', 138,
        'i', 178,
        'j', 191,
        'p', 140,
        'q', 225,
        'r', 195,
        't', 209,
        '{', 278,
        '}', 280,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 234,
        ',', 274,
        '-', 97,
        'A', 18,
        'D', 13,
        'E', 63,
        'G', 11,
        'M', 33,
        'P', 22,
        'S', 21,
        '[', 294,
        ']', 295,
        'f', 34,
        'i', 58,
        't', 75,
        '{', 278,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(107);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '}') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(274);
      if (lookahead == '{') ADVANCE(277);
      if (lookahead == '}') ADVANCE(280);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(270);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(262);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(246);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'Q') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(27);
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(254);
      END_STATE();
    case 24:
      if (lookahead == 'P') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'Q') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(264);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(268);
      END_STATE();
    case 30:
      if (lookahead == 'T') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'T') ADVANCE(266);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(244);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 52:
      if (lookahead == 'j') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 93:
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 95:
      if (lookahead == '}') ADVANCE(291);
      END_STATE();
    case 96:
      if (lookahead == '}') ADVANCE(293);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 99:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 100:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '"', 234,
        '*', 8,
        ',', 274,
        '-', 97,
        '/', 3,
        ':', 296,
        'A', 122,
        'D', 117,
        'E', 184,
        'G', 115,
        'M', 137,
        'P', 126,
        'S', 125,
        '[', 294,
        ']', 295,
        'a', 147,
        'c', 203,
        'e', 189,
        'f', 138,
        'i', 178,
        'j', 191,
        'p', 140,
        'q', 225,
        'r', 195,
        't', 209,
        '{', 278,
        '}', 280,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      ADVANCE_MAP(
        '"', 234,
        ',', 274,
        '-', 97,
        '/', 3,
        'A', 122,
        'D', 117,
        'E', 184,
        'G', 115,
        'M', 137,
        'P', 126,
        'S', 125,
        '[', 294,
        ']', 295,
        'a', 148,
        'c', 203,
        'e', 189,
        'f', 139,
        'i', 178,
        'j', 192,
        'p', 141,
        'q', 225,
        'r', 195,
        't', 209,
        '{', 278,
        '}', 280,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_declaration_type);
      if (lookahead == 'N') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_declaration_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '=') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '=') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'A') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'B') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'G') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'Q') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'U') ADVANCE(133);
      if (lookahead == 'g') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'P') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'P') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'Q') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'S') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'S') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'T') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 's') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'a') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'b') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 's') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'p') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'c') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'd') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'g') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'i') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'l') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'm') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'w') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'y') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_string_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_EmailAndPassword);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_EmailAndPassword);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PostgreSQL);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_PostgreSQL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SQLite);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SQLite);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Simple);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_Simple);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PgBoss);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PgBoss);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SMTP);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SMTP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SendGrid);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_SendGrid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_Mailgun);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Mailgun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Dummy);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_Dummy);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_ALL);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_ALL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_GET);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GET);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_POST);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_POST);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_PUT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PUT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DELETE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DELETE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQpsl);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 'j') ADVANCE(288);
      if (lookahead == 'p') ADVANCE(289);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(290);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(290);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(290);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_prisma_closure_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_psl_EQ_RBRACE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQjson);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_json_EQ_RBRACE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
  [2] = {.lex_state = 101},
  [3] = {.lex_state = 101},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 101},
  [6] = {.lex_state = 101},
  [7] = {.lex_state = 101},
  [8] = {.lex_state = 101},
  [9] = {.lex_state = 101},
  [10] = {.lex_state = 101},
  [11] = {.lex_state = 101},
  [12] = {.lex_state = 101},
  [13] = {.lex_state = 101},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 101},
  [17] = {.lex_state = 101},
  [18] = {.lex_state = 101},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 101},
  [21] = {.lex_state = 101},
  [22] = {.lex_state = 101},
  [23] = {.lex_state = 101},
  [24] = {.lex_state = 101},
  [25] = {.lex_state = 101},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 284},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 284},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 284},
  [40] = {.lex_state = 284},
  [41] = {.lex_state = 284},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 104},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_declaration_type] = ACTIONS(1),
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
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
    [sym_source_file] = STATE(69),
    [sym_declaration] = STATE(2),
    [sym_comment] = STATE(24),
    [sym_value] = STATE(24),
    [sym_string] = STATE(17),
    [sym_constant] = STATE(17),
    [sym_js_import] = STATE(17),
    [sym_prisma_closure] = STATE(17),
    [sym_json_closure] = STATE(17),
    [sym_array] = STATE(17),
    [sym_dictionary] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_declaration_type] = ACTIONS(9),
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
    [sym_declaration] = STATE(3),
    [sym_comment] = STATE(24),
    [sym_value] = STATE(24),
    [sym_string] = STATE(17),
    [sym_constant] = STATE(17),
    [sym_js_import] = STATE(17),
    [sym_prisma_closure] = STATE(17),
    [sym_json_closure] = STATE(17),
    [sym_array] = STATE(17),
    [sym_dictionary] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_declaration_type] = ACTIONS(9),
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
    [sym_declaration] = STATE(3),
    [sym_comment] = STATE(24),
    [sym_value] = STATE(24),
    [sym_string] = STATE(17),
    [sym_constant] = STATE(17),
    [sym_js_import] = STATE(17),
    [sym_prisma_closure] = STATE(17),
    [sym_json_closure] = STATE(17),
    [sym_array] = STATE(17),
    [sym_dictionary] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(34),
    [sym_declaration_type] = ACTIONS(37),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE_EQpsl,
    ACTIONS(23), 1,
      anon_sym_LBRACE_EQjson,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_import,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym_value,
    STATE(17), 7,
      sym_string,
      sym_constant,
      sym_js_import,
      sym_prisma_closure,
      sym_json_closure,
      sym_array,
      sym_dictionary,
    ACTIONS(64), 16,
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
  [55] = 2,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(72), 20,
      sym_declaration_type,
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
  [91] = 2,
    ACTIONS(74), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(76), 20,
      sym_declaration_type,
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
  [127] = 2,
    ACTIONS(78), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(80), 20,
      sym_declaration_type,
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
  [163] = 2,
    ACTIONS(82), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(84), 20,
      sym_declaration_type,
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
  [199] = 2,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(88), 20,
      sym_declaration_type,
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
  [235] = 2,
    ACTIONS(90), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(92), 20,
      sym_declaration_type,
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
  [271] = 2,
    ACTIONS(94), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(96), 20,
      sym_declaration_type,
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
  [307] = 2,
    ACTIONS(98), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(100), 20,
      sym_declaration_type,
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
  [343] = 2,
    ACTIONS(102), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(104), 20,
      sym_declaration_type,
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
  [379] = 10,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE_EQpsl,
    ACTIONS(23), 1,
      anon_sym_LBRACE_EQjson,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_import,
    STATE(49), 1,
      sym_value,
    STATE(17), 7,
      sym_string,
      sym_constant,
      sym_js_import,
      sym_prisma_closure,
      sym_json_closure,
      sym_array,
      sym_dictionary,
    ACTIONS(64), 16,
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
  [431] = 10,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE_EQpsl,
    ACTIONS(23), 1,
      anon_sym_LBRACE_EQjson,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_import,
    STATE(51), 1,
      sym_value,
    STATE(17), 7,
      sym_string,
      sym_constant,
      sym_js_import,
      sym_prisma_closure,
      sym_json_closure,
      sym_array,
      sym_dictionary,
    ACTIONS(64), 16,
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
  [483] = 2,
    ACTIONS(106), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(108), 20,
      sym_declaration_type,
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
  [519] = 2,
    ACTIONS(110), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(112), 20,
      sym_declaration_type,
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
  [555] = 2,
    ACTIONS(114), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(116), 20,
      sym_declaration_type,
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
  [591] = 2,
    ACTIONS(118), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(120), 20,
      sym_declaration_type,
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
  [627] = 2,
    ACTIONS(122), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(124), 20,
      sym_declaration_type,
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
  [663] = 2,
    ACTIONS(126), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(128), 20,
      sym_declaration_type,
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
  [699] = 2,
    ACTIONS(130), 11,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(132), 20,
      sym_declaration_type,
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
  [735] = 2,
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
      sym_declaration_type,
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
  [768] = 2,
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
      sym_declaration_type,
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
  [801] = 2,
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
      sym_declaration_type,
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
  [834] = 4,
    ACTIONS(146), 1,
      sym_variable,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_dict_entry,
    STATE(68), 1,
      sym_key,
  [847] = 4,
    ACTIONS(150), 1,
      sym_variable,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_default_import,
    STATE(61), 1,
      sym_named_import,
  [860] = 3,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_string_repeat1,
    ACTIONS(156), 2,
      sym_string_content,
      sym_escape_sequence,
  [871] = 3,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_string_repeat1,
    ACTIONS(160), 2,
      sym_string_content,
      sym_escape_sequence,
  [882] = 4,
    ACTIONS(162), 1,
      sym_variable,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_as,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
  [895] = 3,
    ACTIONS(170), 1,
      aux_sym_prisma_closure_token1,
    STATE(31), 1,
      aux_sym_prisma_closure_repeat1,
    ACTIONS(173), 2,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_json_EQ_RBRACE,
  [906] = 3,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym_string_repeat1,
    ACTIONS(177), 2,
      sym_string_content,
      sym_escape_sequence,
  [917] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_dictionary_repeat1,
  [927] = 3,
    ACTIONS(184), 1,
      sym_variable,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_named_import_repeat1,
  [937] = 3,
    ACTIONS(184), 1,
      sym_variable,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_named_import_repeat1,
  [947] = 3,
    ACTIONS(146), 1,
      sym_variable,
    STATE(53), 1,
      sym_dict_entry,
    STATE(68), 1,
      sym_key,
  [957] = 3,
    ACTIONS(190), 1,
      aux_sym_prisma_closure_token1,
    ACTIONS(192), 1,
      anon_sym_psl_EQ_RBRACE,
    STATE(40), 1,
      aux_sym_prisma_closure_repeat1,
  [967] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_dictionary_repeat1,
  [977] = 3,
    ACTIONS(196), 1,
      aux_sym_prisma_closure_token1,
    ACTIONS(198), 1,
      anon_sym_json_EQ_RBRACE,
    STATE(41), 1,
      aux_sym_prisma_closure_repeat1,
  [987] = 3,
    ACTIONS(200), 1,
      aux_sym_prisma_closure_token1,
    ACTIONS(202), 1,
      anon_sym_psl_EQ_RBRACE,
    STATE(31), 1,
      aux_sym_prisma_closure_repeat1,
  [997] = 3,
    ACTIONS(200), 1,
      aux_sym_prisma_closure_token1,
    ACTIONS(204), 1,
      anon_sym_json_EQ_RBRACE,
    STATE(31), 1,
      aux_sym_prisma_closure_repeat1,
  [1007] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [1017] = 3,
    ACTIONS(210), 1,
      sym_variable,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_named_import_repeat1,
  [1027] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_array_repeat1,
  [1037] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_dictionary_repeat1,
  [1047] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [1057] = 1,
    ACTIONS(227), 3,
      sym_variable,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1063] = 2,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(229), 2,
      sym_variable,
      anon_sym_RBRACE,
  [1071] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1076] = 2,
    ACTIONS(233), 1,
      sym_variable,
    STATE(48), 1,
      sym_alias,
  [1083] = 1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1088] = 1,
    ACTIONS(213), 2,
      sym_variable,
      anon_sym_RBRACE,
  [1093] = 1,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1098] = 2,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_string,
  [1105] = 2,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_from,
  [1112] = 2,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_string,
  [1119] = 1,
    ACTIONS(241), 2,
      sym_variable,
      anon_sym_RBRACE,
  [1124] = 2,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_named_import,
  [1131] = 1,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_from,
  [1136] = 1,
    ACTIONS(245), 1,
      anon_sym_COLON,
  [1140] = 1,
    ACTIONS(239), 1,
      anon_sym_from,
  [1144] = 1,
    ACTIONS(247), 1,
      anon_sym_from,
  [1148] = 1,
    ACTIONS(249), 1,
      anon_sym_from,
  [1152] = 1,
    ACTIONS(251), 1,
      aux_sym_comment_token2,
  [1156] = 1,
    ACTIONS(253), 1,
      anon_sym_from,
  [1160] = 1,
    ACTIONS(255), 1,
      aux_sym_comment_token1,
  [1164] = 1,
    ACTIONS(257), 1,
      anon_sym_STAR_SLASH,
  [1168] = 1,
    ACTIONS(259), 1,
      anon_sym_COLON,
  [1172] = 1,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 91,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 307,
  [SMALL_STATE(13)] = 343,
  [SMALL_STATE(14)] = 379,
  [SMALL_STATE(15)] = 431,
  [SMALL_STATE(16)] = 483,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 555,
  [SMALL_STATE(19)] = 591,
  [SMALL_STATE(20)] = 627,
  [SMALL_STATE(21)] = 663,
  [SMALL_STATE(22)] = 699,
  [SMALL_STATE(23)] = 735,
  [SMALL_STATE(24)] = 768,
  [SMALL_STATE(25)] = 801,
  [SMALL_STATE(26)] = 834,
  [SMALL_STATE(27)] = 847,
  [SMALL_STATE(28)] = 860,
  [SMALL_STATE(29)] = 871,
  [SMALL_STATE(30)] = 882,
  [SMALL_STATE(31)] = 895,
  [SMALL_STATE(32)] = 906,
  [SMALL_STATE(33)] = 917,
  [SMALL_STATE(34)] = 927,
  [SMALL_STATE(35)] = 937,
  [SMALL_STATE(36)] = 947,
  [SMALL_STATE(37)] = 957,
  [SMALL_STATE(38)] = 967,
  [SMALL_STATE(39)] = 977,
  [SMALL_STATE(40)] = 987,
  [SMALL_STATE(41)] = 997,
  [SMALL_STATE(42)] = 1007,
  [SMALL_STATE(43)] = 1017,
  [SMALL_STATE(44)] = 1027,
  [SMALL_STATE(45)] = 1037,
  [SMALL_STATE(46)] = 1047,
  [SMALL_STATE(47)] = 1057,
  [SMALL_STATE(48)] = 1063,
  [SMALL_STATE(49)] = 1071,
  [SMALL_STATE(50)] = 1076,
  [SMALL_STATE(51)] = 1083,
  [SMALL_STATE(52)] = 1088,
  [SMALL_STATE(53)] = 1093,
  [SMALL_STATE(54)] = 1098,
  [SMALL_STATE(55)] = 1105,
  [SMALL_STATE(56)] = 1112,
  [SMALL_STATE(57)] = 1119,
  [SMALL_STATE(58)] = 1124,
  [SMALL_STATE(59)] = 1131,
  [SMALL_STATE(60)] = 1136,
  [SMALL_STATE(61)] = 1140,
  [SMALL_STATE(62)] = 1144,
  [SMALL_STATE(63)] = 1148,
  [SMALL_STATE(64)] = 1152,
  [SMALL_STATE(65)] = 1156,
  [SMALL_STATE(66)] = 1160,
  [SMALL_STATE(67)] = 1164,
  [SMALL_STATE(68)] = 1168,
  [SMALL_STATE(69)] = 1172,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 6, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 6, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_closure, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_closure, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_closure, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_closure, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_closure, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_closure, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_closure, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_closure, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 4, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 1, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prisma_closure_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prisma_closure_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entry, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_import_repeat1, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_import, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_import, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
