/**
 * @file Wasp grammar for tree-sitter
 * @author Bartosz Burclaf
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: 'wasp',

  rules: {
    source_file: $ => repeat($.definition),

    definition: $ => choice(
      $.comment,
      $.type,
      $.variable,
      $.value
    ),

    comment: $ => choice(
        seq('//', /.*/),
        seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '*/')
    ),

    type: $ => token(choice(
      'action',
      'apiNamespace',
      'api',
      'app',
      'entity',
      'job',
      'page',
      'query',
      'route',
      'crud'
    )),

    variable: $ => /[a-zA-Z][0-9a-zA-Z]*/,

    value: $ => choice(
      $.string,
      $.number,
      $.constant,
      $.js_import,
      $.prisma_closure,
      $.json_closure,
      $.array,
      $.dictionary
    ),

    string: $ => seq(
      '"',
      repeat(choice($.string_content, $.escape_sequence)),
      '"'
    ),

    string_content: $ => token.immediate(prec(1, /[^"\\]+/)),

    escape_sequence: $ => token.immediate(/\\./),

    number: $ => token(/-?\d+(\.\d+)?/),

    constant: $ => choice(
      'true',
      'false',
      'EmailAndPassword',
      'PostgreSQL',
      'SQLite',
      'Simple',
      'PgBoss',
      'SMTP',
      'SendGrid',
      'Mailgun',
      'Dummy',
      'ALL',
      'GET',
      'POST',
      'PUT',
      'DELETE'
    ),

    js_import: $ => seq(
      'import',
      optional($.import_statement),
      'from',
      $.string
    ),

    import_statement: $ => seq(
      '{',
      repeat(seq($.variable, optional(','))),
      '}'
    ),

    prisma_closure: $ => seq(
      '{=psl',
      repeat(/[^=]*/),
      'psl=}'
    ),

    json_closure: $ => seq(
      '{=json',
      repeat(/[^=]*/),
      'json=}'
    ),

    array: $ => seq(
      '[',
      optional(seq($.value, repeat(seq(',', $.value)))),
      ']'
    ),

    dictionary: $ => seq(
      '{',
      optional(seq($.dict_entry, repeat(seq(',', $.dict_entry)))),
      '}'
    ),

    dict_entry: $ => seq($.variable, ':', $.value)
  }
});

