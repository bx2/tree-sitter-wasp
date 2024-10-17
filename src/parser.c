#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  sym_type_declaration = 6,
  aux_sym_variable_declaration_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_token1 = 9,
  sym_number = 10,
  aux_sym_constant_token1 = 11,
  aux_sym_constant_token2 = 12,
  aux_sym_constant_token3 = 13,
  anon_sym_import = 14,
  anon_sym_from = 15,
  anon_sym_LBRACE_EQjson = 16,
  anon_sym_json_EQ_RBRACE = 17,
  anon_sym_LBRACE_EQpsl = 18,
  anon_sym_psl_EQ_RBRACE = 19,
  anon_sym_LBRACK = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACK = 22,
  anon_sym_LBRACE = 23,
  anon_sym_COLON = 24,
  anon_sym_RBRACE = 25,
  sym_dict_key = 26,
  sym_string_content = 27,
  sym_source_file = 28,
  sym__definition = 29,
  sym_comment = 30,
  sym_variable_declaration = 31,
  sym_value = 32,
  sym_string = 33,
  sym_constant = 34,
  sym_js_import = 35,
  sym_json_closure = 36,
  sym_prisma_closure = 37,
  sym_array = 38,
  sym_dict = 39,
  sym_variable = 40,
  aux_sym_source_file_repeat1 = 41,
  aux_sym_string_repeat1 = 42,
  aux_sym_array_repeat1 = 43,
  aux_sym_dict_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_type_declaration] = "type_declaration",
  [aux_sym_variable_declaration_token1] = "variable_declaration_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
  [aux_sym_constant_token3] = "constant_token3",
  [anon_sym_import] = "import",
  [anon_sym_from] = "from",
  [anon_sym_LBRACE_EQjson] = "{=json",
  [anon_sym_json_EQ_RBRACE] = "json=}",
  [anon_sym_LBRACE_EQpsl] = "{=psl",
  [anon_sym_psl_EQ_RBRACE] = "psl=}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACE] = "}",
  [sym_dict_key] = "dict_key",
  [sym_string_content] = "string_content",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_comment] = "comment",
  [sym_variable_declaration] = "variable_declaration",
  [sym_value] = "value",
  [sym_string] = "string",
  [sym_constant] = "constant",
  [sym_js_import] = "js_import",
  [sym_json_closure] = "json_closure",
  [sym_prisma_closure] = "prisma_closure",
  [sym_array] = "array",
  [sym_dict] = "dict",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_type_declaration] = sym_type_declaration,
  [aux_sym_variable_declaration_token1] = aux_sym_variable_declaration_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
  [aux_sym_constant_token3] = aux_sym_constant_token3,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LBRACE_EQjson] = anon_sym_LBRACE_EQjson,
  [anon_sym_json_EQ_RBRACE] = anon_sym_json_EQ_RBRACE,
  [anon_sym_LBRACE_EQpsl] = anon_sym_LBRACE_EQpsl,
  [anon_sym_psl_EQ_RBRACE] = anon_sym_psl_EQ_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_dict_key] = sym_dict_key,
  [sym_string_content] = sym_string_content,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_comment] = sym_comment,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_value] = sym_value,
  [sym_string] = sym_string,
  [sym_constant] = sym_constant,
  [sym_js_import] = sym_js_import,
  [sym_json_closure] = sym_json_closure,
  [sym_prisma_closure] = sym_prisma_closure,
  [sym_array] = sym_array,
  [sym_dict] = sym_dict,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
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
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token3] = {
    .visible = false,
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
  [anon_sym_LBRACE_EQjson] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json_EQ_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_EQpsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_psl_EQ_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_dict_key] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
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
  [sym_json_closure] = {
    .visible = true,
    .named = true,
  },
  [sym_prisma_closure] = {
    .visible = true,
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
  [sym_variable] = {
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
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 145,
        '*', 5,
        ',', 158,
        '-', 20,
        '/', 2,
        ':', 161,
        'A', 43,
        'D', 39,
        'E', 97,
        'G', 38,
        'M', 56,
        'P', 47,
        'S', 46,
        '[', 157,
        '\\', 22,
        ']', 159,
        'a', 65,
        'c', 115,
        'e', 102,
        'f', 57,
        'i', 91,
        'j', 104,
        'p', 59,
        'q', 136,
        'r', 107,
        't', 121,
        '{', 160,
        '}', 162,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == 'j') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(156);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(154);
      END_STATE();
    case 19:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      ADVANCE_MAP(
        '"', 145,
        ',', 158,
        '-', 20,
        '/', 2,
        'A', 43,
        'D', 39,
        'E', 97,
        'G', 38,
        'M', 56,
        'P', 47,
        'S', 46,
        '[', 157,
        ']', 159,
        'a', 65,
        'c', 115,
        'e', 102,
        'f', 58,
        'i', 91,
        'j', 104,
        'p', 59,
        'q', 136,
        'r', 107,
        't', 121,
        '{', 160,
        '}', 162,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_type_declaration);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_type_declaration);
      if (lookahead == 'N') ADVANCE(61);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == '=') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'A') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'B') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'E') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'E') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'E') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'G') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'L') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'L') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'L') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'L') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'M') ADVANCE(54);
      if (lookahead == 'Q') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(53);
      if (lookahead == 'g') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'P') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'P') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'Q') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'S') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'S') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'T') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'T') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'T') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'a') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'b') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'c') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'd') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'd') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'd') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'd') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'g') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'g') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'g') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'l') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'm') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'n') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 's') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'p') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'p') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'p') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'w') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'y') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (lookahead == 'y') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_variable_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQjson);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_json_EQ_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LBRACE_EQpsl);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_psl_EQ_RBRACE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_dict_key);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_string_content);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_type_declaration] = ACTIONS(1),
    [aux_sym_variable_declaration_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
    [aux_sym_constant_token3] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LBRACE_EQjson] = ACTIONS(1),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(1),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__definition] = STATE(8),
    [sym_comment] = STATE(8),
    [sym_variable_declaration] = STATE(8),
    [sym_value] = STATE(8),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(9),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_value] = STATE(2),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SLASH_SLASH] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(34),
    [sym_type_declaration] = ACTIONS(37),
    [aux_sym_variable_declaration_token1] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [sym_number] = ACTIONS(46),
    [aux_sym_constant_token1] = ACTIONS(49),
    [aux_sym_constant_token2] = ACTIONS(49),
    [aux_sym_constant_token3] = ACTIONS(49),
    [anon_sym_import] = ACTIONS(52),
    [anon_sym_LBRACE_EQjson] = ACTIONS(55),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(58),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(64),
  },
  [3] = {
    [sym__definition] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_variable_declaration] = STATE(6),
    [sym_value] = STATE(6),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(67),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(69),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [4] = {
    [sym__definition] = STATE(42),
    [sym_comment] = STATE(42),
    [sym_variable_declaration] = STATE(42),
    [sym_value] = STATE(42),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_array_repeat1] = STATE(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(71),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [5] = {
    [sym__definition] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_variable_declaration] = STATE(7),
    [sym_value] = STATE(7),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(75),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [6] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_value] = STATE(2),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(79),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_json_EQ_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [7] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_value] = STATE(2),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(79),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_psl_EQ_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [8] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_value] = STATE(2),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(79),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [9] = {
    [sym__definition] = STATE(37),
    [sym_comment] = STATE(37),
    [sym_variable_declaration] = STATE(37),
    [sym_value] = STATE(37),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_array_repeat1] = STATE(10),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(87),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [10] = {
    [sym__definition] = STATE(54),
    [sym_comment] = STATE(54),
    [sym_variable_declaration] = STATE(54),
    [sym_value] = STATE(54),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [aux_sym_array_repeat1] = STATE(10),
    [anon_sym_SLASH_SLASH] = ACTIONS(89),
    [anon_sym_SLASH_STAR] = ACTIONS(92),
    [sym_type_declaration] = ACTIONS(95),
    [aux_sym_variable_declaration_token1] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_number] = ACTIONS(104),
    [aux_sym_constant_token1] = ACTIONS(107),
    [aux_sym_constant_token2] = ACTIONS(107),
    [aux_sym_constant_token3] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(110),
    [anon_sym_LBRACE_EQjson] = ACTIONS(113),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(122),
  },
  [11] = {
    [sym__definition] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_variable_declaration] = STATE(43),
    [sym_value] = STATE(43),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(125),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [12] = {
    [sym__definition] = STATE(41),
    [sym_comment] = STATE(41),
    [sym_variable_declaration] = STATE(41),
    [sym_value] = STATE(41),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(127),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
  [13] = {
    [sym__definition] = STATE(56),
    [sym_comment] = STATE(56),
    [sym_variable_declaration] = STATE(56),
    [sym_value] = STATE(56),
    [sym_string] = STATE(20),
    [sym_constant] = STATE(20),
    [sym_js_import] = STATE(20),
    [sym_json_closure] = STATE(20),
    [sym_prisma_closure] = STATE(20),
    [sym_array] = STATE(20),
    [sym_dict] = STATE(20),
    [sym_variable] = STATE(20),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [sym_type_declaration] = ACTIONS(129),
    [aux_sym_variable_declaration_token1] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [aux_sym_constant_token1] = ACTIONS(17),
    [aux_sym_constant_token2] = ACTIONS(17),
    [aux_sym_constant_token3] = ACTIONS(17),
    [anon_sym_import] = ACTIONS(19),
    [anon_sym_LBRACE_EQjson] = ACTIONS(21),
    [anon_sym_LBRACE_EQpsl] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(133), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(131), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [25] = 2,
    ACTIONS(137), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(135), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [50] = 2,
    ACTIONS(141), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(139), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [75] = 2,
    ACTIONS(145), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(143), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [100] = 2,
    ACTIONS(149), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(147), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [125] = 2,
    ACTIONS(153), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [150] = 2,
    ACTIONS(157), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(155), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [175] = 2,
    ACTIONS(161), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(159), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [200] = 2,
    ACTIONS(165), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(163), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [225] = 2,
    ACTIONS(169), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(167), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [250] = 2,
    ACTIONS(173), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(171), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [275] = 2,
    ACTIONS(177), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(175), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [300] = 2,
    ACTIONS(181), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(179), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [325] = 2,
    ACTIONS(185), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(183), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [350] = 2,
    ACTIONS(189), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(187), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [375] = 2,
    ACTIONS(193), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(191), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [400] = 2,
    ACTIONS(198), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(195), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [425] = 2,
    ACTIONS(203), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(201), 14,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_json_EQ_RBRACE,
      anon_sym_LBRACE_EQpsl,
      anon_sym_psl_EQ_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [450] = 2,
    ACTIONS(207), 6,
      aux_sym_variable_declaration_token1,
      aux_sym_constant_token1,
      aux_sym_constant_token2,
      aux_sym_constant_token3,
      anon_sym_import,
      anon_sym_LBRACE,
    ACTIONS(205), 8,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      sym_type_declaration,
      anon_sym_DQUOTE,
      sym_number,
      anon_sym_LBRACE_EQjson,
      anon_sym_LBRACE_EQpsl,
      anon_sym_LBRACK,
  [469] = 4,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      aux_sym_string_token1,
    ACTIONS(213), 1,
      sym_string_content,
    STATE(34), 1,
      aux_sym_string_repeat1,
  [482] = 4,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      aux_sym_string_token1,
    ACTIONS(219), 1,
      sym_string_content,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [495] = 4,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      aux_sym_string_token1,
    ACTIONS(226), 1,
      sym_string_content,
    STATE(35), 1,
      aux_sym_string_repeat1,
  [508] = 3,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym_dict_key,
    STATE(39), 1,
      aux_sym_dict_repeat1,
  [518] = 2,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
  [525] = 2,
    ACTIONS(237), 1,
      sym_dict_key,
    STATE(38), 1,
      aux_sym_dict_repeat1,
  [532] = 2,
    ACTIONS(240), 1,
      sym_dict_key,
    STATE(38), 1,
      aux_sym_dict_repeat1,
  [539] = 2,
    ACTIONS(242), 1,
      aux_sym_variable_declaration_token1,
    STATE(55), 1,
      sym_variable,
  [546] = 2,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
  [553] = 2,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
  [560] = 2,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
  [567] = 2,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_string,
  [574] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [578] = 1,
    ACTIONS(254), 1,
      aux_sym_comment_token2,
  [582] = 1,
    ACTIONS(256), 1,
      aux_sym_comment_token1,
  [586] = 1,
    ACTIONS(258), 1,
      anon_sym_COLON,
  [590] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [594] = 1,
    ACTIONS(262), 1,
      anon_sym_STAR_SLASH,
  [598] = 1,
    ACTIONS(264), 1,
      anon_sym_from,
  [602] = 1,
    ACTIONS(266), 1,
      sym_dict_key,
  [606] = 1,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [610] = 1,
    ACTIONS(233), 1,
      anon_sym_COMMA,
  [614] = 1,
    ACTIONS(270), 1,
      anon_sym_from,
  [618] = 1,
    ACTIONS(244), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 25,
  [SMALL_STATE(16)] = 50,
  [SMALL_STATE(17)] = 75,
  [SMALL_STATE(18)] = 100,
  [SMALL_STATE(19)] = 125,
  [SMALL_STATE(20)] = 150,
  [SMALL_STATE(21)] = 175,
  [SMALL_STATE(22)] = 200,
  [SMALL_STATE(23)] = 225,
  [SMALL_STATE(24)] = 250,
  [SMALL_STATE(25)] = 275,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 325,
  [SMALL_STATE(28)] = 350,
  [SMALL_STATE(29)] = 375,
  [SMALL_STATE(30)] = 400,
  [SMALL_STATE(31)] = 425,
  [SMALL_STATE(32)] = 450,
  [SMALL_STATE(33)] = 469,
  [SMALL_STATE(34)] = 482,
  [SMALL_STATE(35)] = 495,
  [SMALL_STATE(36)] = 508,
  [SMALL_STATE(37)] = 518,
  [SMALL_STATE(38)] = 525,
  [SMALL_STATE(39)] = 532,
  [SMALL_STATE(40)] = 539,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 553,
  [SMALL_STATE(43)] = 560,
  [SMALL_STATE(44)] = 567,
  [SMALL_STATE(45)] = 574,
  [SMALL_STATE(46)] = 578,
  [SMALL_STATE(47)] = 582,
  [SMALL_STATE(48)] = 586,
  [SMALL_STATE(49)] = 590,
  [SMALL_STATE(50)] = 594,
  [SMALL_STATE(51)] = 598,
  [SMALL_STATE(52)] = 602,
  [SMALL_STATE(53)] = 606,
  [SMALL_STATE(54)] = 610,
  [SMALL_STATE(55)] = 614,
  [SMALL_STATE(56)] = 618,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 6, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 6, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_closure, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_closure, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_closure, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_closure, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_closure, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_closure, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prisma_closure, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prisma_closure, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_import, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable_declaration, 1, 0, 0), REDUCE(sym_variable, 1, 0, 0),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_variable_declaration, 1, 0, 0), REDUCE(sym_variable, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 4, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
