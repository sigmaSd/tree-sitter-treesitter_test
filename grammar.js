/// <reference types="./node_modules/tree-sitter-cli/dsl.d.ts" />

module.exports = grammar({
  name: "treesitter_test",
  rules: {
    source_file: ($) => repeat($.case),
    case: ($) => seq($.doubleBar, $._newLine, repeat1(seq($.caseName, $._newLine)), $.doubleBar, $._newLine, repeat1(seq($.code, $._newLine)), $.bar, $._newLine, $.expected),
    doubleBar: () => repeat1("="),
    _newLine: () => "\n",
    // don't allow casename that starts with =
    // TODO: can this be removed
    caseName: () => repeat1(/[^=][^\n]+/),
    // don't allow code that starts with -
    // TODO: can this be removed
    code: () => /[^-][^\n]+/,
    bar: () => repeat1("-"),
    expected: ($) => $.node,
    node: ($) => seq("(", /[^\(\)]+/, repeat($.node), ")"),
  },
});
