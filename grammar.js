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
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.umlCall,
    ),

    umlCall: $ => seq(
      "@startuml",
      repeat($._line),
      "@enduml"
    ),

    _line: $ => choice(
      $.sequence,
      $.object,
    ),

    sequence: $ => seq(
      $.identifier,
      $.relation,
      $.identifier,
      ":",
      $.text
    ),

    object: $ => seq(
      $.keyword,
      $.identifier,
      'as',
      $.identifier
    ),

    keyword: _ => choice(
      'actor',
      'participant',
      'boundary',
      'control',
      'entity',
      'database',
      'collections',
      'queue',
    ),
    relation: $ => choice(
      '->',
      '-->',
      '<--',
    ),

    identifier: $ => /[a-zA-Z]+/,

    text: $ => /[a-zA-Z]+/,
  }

});
