;; Highlight comments
(comment) @comment

;; Highlight declaration types (e.g., app, route, page, entity)
(declaration_type) @keyword
(declaration_name) @keyword

;; Highlight identifiers (e.g., names of declarations and fields)
(identifier) @variable

;; Highlight strings
(string) @string

;; Highlight numbers
(number) @number

;; Highlight booleans
(bool) @boolean

;; Highlight import statements
(import_statement) @keyword
(default_import) @variable
(named_import) @variable
(alias) @variable
(path) @string

;; Highlight fields in dictionaries
(field (identifier) @property)

