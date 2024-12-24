from unittest import TestCase

import tree_sitter, tree_sitter_plantuml_sitter


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_plantuml_sitter.language())
        except Exception:
            self.fail("Error loading PlantumlSitter grammar")
