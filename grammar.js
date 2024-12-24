/**
 * @file A sitter for Plantuml Files
 * @author David Schlueter
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "plantuml_sitter",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
