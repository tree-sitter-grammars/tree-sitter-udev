import XCTest
import SwiftTreeSitter
import TreeSitterUdev

final class TreeSitterUdevTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_udev())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading udev grammar")
    }
}
