# tree-sitter-wasp

[![CI][ci]](https://github.com/tree-sitter/tree-sitter-json/actions/workflows/ci.yml)

Tree-sitter grammar for [Wasp](https://github.com/wasp-lang/wasp)

[ci]: https://img.shields.io/github/actions/workflow/status/bx2/tree-sitter-wasp/ci.yml?logo=github&label=CI


## How to use it?

This grammar is not yet added to the tree-sitter repos, so in order to use it, you will
have to add it manually.

> [!NOTE]
> I will assume that you are using Lazy as you package manager and that you use
> lua to configure your IDE.

1. Register it with tree-sitter in your configuration:

```lua
return {
    "nvim-treesitter/nvim-treesitter",
    build = ":TSUpdate",
    dependencies = {
        -- your dependencies
        {
            'bx2/tree-sitter-wasp',
            build = ':TSInstall wasp',
        }
    },
    config = function()
        -- Adding custom parser configuration for Wasp
        local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
        parser_config.wasp = {
            install_info = {
                url = "https://github.com/bx2/tree-sitter-wasp",
                files = { "src/parser.c" },
                branch = "main",
                generate_requires_npm = false,
                requires_generate_from_grammar = false
            },
            filetype = "wasp"
        }

        require("nvim-treesitter.configs").setup {
            ensure_installed = {
                # ...
                "wasp",
            },
            -- rest of your confi
        }
    end
}
```

2. Add the filetype detection:

```lua
vim.filetype.add({
    extension = {
        -- other extensions
        wasp = "wasp"
    },
    -- rest of the config
})
```

