module.exports = grammar({
  name: 'wasp',

  conflicts: $ => [
    [$.variable_declaration, $.variable]
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.comment,
      $.type_declaration,
      $.variable_declaration,
      $.value
    ),

    comment: $ => choice(
      seq('//', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '*/')
    ),

    type_declaration: $ => token(prec(2, /(action|apiNamespace|api|app|entity|job|page|query|route|crud)/)),

    variable_declaration: $ => prec(1, /[a-zA-Z][0-9a-zA-Z]*/),

    value: $ => choice(
      $.string,
      $.number,
      $.constant,
      $.js_import,
      $.prisma_closure,
      $.json_closure,
      $.array,
      $.dict,
      $.variable
    ),

    string: $ => seq('"', repeat(choice($.string_content, /[^"\\]/)), '"'),

    number: $ => /-?\d+(\.\d+)?/,

    constant: $ => choice(
      /(true|false)/,
      /(EmailAndPassword|PostgreSQL|SQLite|Simple|PgBoss|SMTP|SendGrid|Mailgun|Dummy)/,
      /(ALL|GET|POST|PUT|DELETE)/
    ),

    js_import: $ => seq(
      'import',
      choice(
        $.string,
        seq('{', repeat($.variable), '}'),
        $.variable
      ),
      'from', $.string
    ),

    json_closure: $ => seq('{=json', repeat($._definition), 'json=}'),

    prisma_closure: $ => seq('{=psl', repeat($._definition), 'psl=}'),

    array: $ => seq(
      '[',
      optional(seq(
        repeat(seq($._definition, ',')),
        $._definition
      )),
      ']'
    ),

    dict: $ => seq(
      '{',
      optional(seq(
        repeat(seq($.dict_key, ':', $._definition, ',')),
        $.dict_key, ':', $._definition
      )),
      '}'
    ),

    dict_key: $ => /[a-zA-Z]+/,

    variable: $ => prec(1, /[a-zA-Z][0-9a-zA-Z]*/),

    string_content: $ => /\\./
  }
});

