package tree_sitter_udev_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_udev "github.com/tree-sitter-grammars/tree-sitter-udev/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_udev.Language())
	if language == nil {
		t.Errorf("Error loading udev grammar")
	}
}
