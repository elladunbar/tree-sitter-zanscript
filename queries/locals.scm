(define find: (match) @local.definition.macro)
(((identifier) @local.reference)
    (#set! reference.scope "global"))
(action name: ((identifier) @local.function)
    (#set! function.scope "global"))
