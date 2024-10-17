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
      'app',
      'route',
      'page',
      'entity'
      // Add more declaration types here...
    ),

    declaration_name: $ => $.identifier,

    declaration_body: $ => seq(
      '{',
      optional(seq($.field, repeat(seq(',', $.field)))),
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
      optional(seq($._value, repeat(seq(',', $._value)))),
      ']'
    ),

    dict: $ => seq(
      '{',
      optional(seq($.field, repeat(seq(',', $.field)))),
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

