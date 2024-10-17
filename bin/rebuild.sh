#!/bin/sh

tree-sitter generate && tree-sitter test && tree-sitter build --wasm
