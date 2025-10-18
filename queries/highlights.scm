; highlights.scm

[
    "DEFINE"
    "define"
    "Define"
] @keyword.directive.define

[
    "INCLUDE"
    "include"
    "Include"
] @keyword.import

[
    "ACTION"
    "action"
    "Action"
    "COMPLETE"
    "complete"
    "Complete"
] @keyword.function

[
    "IF"
    "if"
    "If"
    "ELSE"
    "else"
    "Else"
    "ENDIF"
    "endif"
    "Endif"
] @keyword.conditional

[
    "WHILE"
    "while"
    "While"
    "ENDWHILE"
    "endwhile"
    "Endwhile"
] @keyword.repeat

[
    "+"
    "-"
    "*"
    "/"
    "<"
    ">"
    "="
] @operator

"," @punctuation.delimiter

[
    "("
    ")"
] @punctuation.bracket

(comment) @comment
(variable) @variable
(match) @constant.macro
(identifier) @constant.macro
(number) @number
(string) @string
(function name: (identifier) @function)
