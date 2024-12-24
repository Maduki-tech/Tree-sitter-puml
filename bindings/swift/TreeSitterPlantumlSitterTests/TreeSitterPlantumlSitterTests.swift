import XCTest
import SwiftTreeSitter
import TreeSitterPlantumlSitter

final class TreeSitterPlantumlSitterTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_plantuml_sitter())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading PlantumlSitter grammar")
    }
}
