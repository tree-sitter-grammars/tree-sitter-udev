// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterUdev",
    products: [
        .library(name: "TreeSitterUdev", targets: ["TreeSitterUdev"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterUdev",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterUdevTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterUdev",
            ],
            path: "bindings/swift/TreeSitterUdevTests"
        )
    ],
    cLanguageStandard: .c11
)