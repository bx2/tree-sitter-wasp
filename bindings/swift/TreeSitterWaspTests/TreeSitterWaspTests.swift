import XCTest
import SwiftTreeSitter
import TreeSitterWasp

final class TreeSitterWaspTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_wasp())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Wasp grammar")
    }
}
