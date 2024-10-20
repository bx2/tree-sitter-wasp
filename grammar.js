/**
 * @file Wasp grammar for tree-sitter
 * @author Bartosz Burclaf
 * @license MIT
 */

/// <reference declaration_types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: 'wasp',

  rules: {
    source_file: $ => repeat(choice(
      $.comment,
      $.declaration
    )),

    declaration: $ => seq(
      $.declaration_type,
      $.declaration_name,
      $.declaration_body
    ),

    declaration_type: $ => choice(
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
    ),

    declaration_name: $ => $.identifier,

    declaration_body: $ => seq(
      '{',
      repeat(choice(
        $.field,
        $.comment,
        ','
      )),
      '}'
    ),

    field: $ => seq($.identifier, ':', $._value),

    _value: $ => choice(
      $.string,
      $.number,
      $.bool,
      $.import_statement,
      $.identifier,
      $.array,
      $.dict
    ),

    array: $ => seq(
      '[',
      repeat(choice($._value, $.comment, ',')),
      ']'
    ),

    dict: $ => seq(
      '{',
      repeat(choice($.field, $.comment, ',')),
      '}'
    ),

    import_statement: $ => seq(
        'import',
        choice(
            $.default_import,
            $.named_import,
            seq($.default_import, ',', $.named_import)
        ),
        'from',
        $.path
    ),

    default_import: $ => $.identifier,

    named_import: $ => seq(
        '{',
        repeat(seq($.identifier, optional(seq('as', $.alias)), optional(','))),
        '}'
    ),

    alias: $ => $.identifier,

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: $ => /"(\\.|[^"])*"/,

    path: $ => token(seq('"@src/', /[^"]*/, '"')),

    number: $ => /[0-9]+(\.[0-9]+)?/,

    bool: $ => choice('true', 'false'),

    comment: $ => token(seq('//', /.*/))
  }
});

