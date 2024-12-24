package tree_sitter_plantuml_sitter_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_plantuml_sitter "github.com/tree-sitter/tree-sitter-plantuml_sitter/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_plantuml_sitter.Language())
	if language == nil {
		t.Errorf("Error loading PlantumlSitter grammar")
	}
}
