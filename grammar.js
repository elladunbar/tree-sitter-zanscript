/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'zanscript',

  extras: $ => [
    /\s/
  ],

  rules: {
    translation_unit: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $._directive,
      $._command,
      $._statement,
    ),

    _directive: $ => choice(
      $.define,
      $.include,
    ),

    define: $ => seq(
      choice(
        'DEFINE',
        'define',
        'Define',
      ),
      $.match,
      $.match,
    ),

    include: $ => seq(
      choice(
        'INCLUDE',
        'include',
        'Include',
      ),
      $.identifier,
    ),

    _command: $ => choice(
      $.action,
      $._control,
    ),

    action: $ => seq(
      choice(
        'ACTION',
        'action',
        'Action',
      ),
      $.identifier,
      $.block,
      choice(
        'COMPLETE',
        'complete',
        'Complete',
      ),
    ),

    _control: $ => choice(
      $.branch,
      $.loop,
    ),

    branch: $ => seq(
      choice(
        'IF',
        'if',
        'If',
      ),
      $.comparison,
      $.block,
      optional(
        seq(
          choice(
            'ELSE',
            'else',
            'Else',
          ),
          $.block,
        ),
      ),
      choice(
        'ENDIF',
        'endif',
        'Endif',
        'EndIf',
      ),
    ),

    loop: $ => seq(
      choice(
        'WHILE',
        'while',
        'While',
      ),
      $.comparison,
      $.block,
      choice(
        'ENDWHILE',
        'endwhile',
        'Endwhile',
      ),
    ),

    comparison: $ => seq(
      $._argument,
      choice(
        '<',
        '>',
        '=',
      ),
      $._argument,
    ),

    block: $ => repeat1(
      choice(
        $._statement,
        $._command,
      ),
    ),

    _statement: $ => choice(
      $.function,
      $.assignment,
      $.comment,
    ), 

    function: $ => seq(
      $.identifier,
      '(',
      optional(
        repeat(
          seq(
            $._argument,
            ',',
          ),
        ),
      ),
      optional(
        $._argument,
      ),
      ')',
    ),
    
    _argument: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.variable,
    ),

    assignment: $ => seq(
      $.variable,
      '=',
      $._expression,
    ),

    _expression: $ => seq(
      $._argument,
      optional(
        repeat(
          seq(
            choice(
              '+',
              '-',
              '*',
              '/',
            ),
            $._argument,
          ),
        ),
      ),
    ),

    comment: $ => seq(
      '#',
      /.*/,
    ),
    
    variable: $ => /@[a-zA-Z0-9_]+/,

    match: $ => /[a-zA-Z0-9_.]+/,

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    number: $ => /\d+(\.\d+)?/,

    string: $ => /['"].*['"]/,
  }
});
