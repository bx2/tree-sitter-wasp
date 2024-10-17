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
        key: $ => $.variable,

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
            choice(
                $.default_import,
                $.named_import,
                seq($.default_import, ',', $.named_import)
            ),
            'from',
            $.string
        ),

        default_import: $ => $.variable,

        named_import: $ => seq(
            '{',
            repeat(seq($.variable, optional(seq('as', $.alias)), optional(','))),
            '}'
        ),

        alias: $ => $.variable,


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

        dict_entry: $ => seq($.key, ':', $.value)
    }
});

