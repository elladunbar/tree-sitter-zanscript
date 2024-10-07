; highlights.scm

(comment) @comment
(variable) @variable
(match) @constant.macro
(identifier) @constant
(number) @number
(string) @string
(function name: (identifier) @function.builtin)
(action name: (identifier) @function)
(detector invoked_action: (identifier) @function.call)
(invoke invoked_action: (identifier) @function.call)
(select first_action: (identifier) @function.call)
(select second_action: (identifier) @function.call)

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

; case insensitive

(define_insensitive) @keyword.directive.define
(include_insensitive) @keyword.import
(action_insensitive) @keyword.function
(complete_insensitive) @keyword.function
(if_insensitive) @keyword.conditional
(else_insensitive) @keyword.conditional
(elseif_insensitive) @keyword.conditional
(endif_insensitive) @keyword.conditional
(while_insensitive) @keyword.repeat
(endwhile_insensitive) @keyword.repeat
(detector_insensitive) @function.builtin 
(invoke_insensitive) @function.builtin
(select_insensitive) @function.builtin
