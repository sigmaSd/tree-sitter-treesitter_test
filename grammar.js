/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "treesitter_test",
  rules: {
    source_file: ($) =>
      seq(
        // non standard, this is custom made for injection regex
        optional(seq($.codeTypeComment, $._newLine)),
        repeat($.case),
      ),
    case: ($) =>
      seq(
        $.doubleBar,
        $._newLine,
        repeat1(seq($.caseName, $._newLine)),
        $.doubleBar,
        $._newLine,
        repeat1(seq($.code, $._newLine)),
        $.bar,
        $._newLine,
        $.expected,
      ),
    doubleBar: () => repeat1("="),
    _newLine: () => "\n",
    codeTypeComment: ($) => seq(";", $.codeType),
    codeType: () => /[^\n]+/,
    // don't allow casename that starts with =
    // don't allow casename thats starts with ;
    // TODO: can this be removed
    caseName: () => repeat1(/[^;=][^\n]+/),
    // don't allow code that starts with -
    // TODO: can this be removed
    code: () => /[^-][^\n]+/,
    bar: () => repeat1("-"),
    expected: ($) => $.node,
    node: ($) => seq("(", /[^\(\)]+/, repeat($.node), ")"),
  },
});
