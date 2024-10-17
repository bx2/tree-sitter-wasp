package tree_sitter_wasp_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_wasp "github.com/bx2/tree-sitter-wasp/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_wasp.Language())
	if language == nil {
		t.Errorf("Error loading Wasp grammar")
	}
}
