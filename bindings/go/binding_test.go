package tree_sitter_zanscript_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_zanscript "github.com/tree-sitter/tree-sitter-zanscript/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_zanscript.Language())
	if language == nil {
		t.Errorf("Error loading Zanscript grammar")
	}
}
