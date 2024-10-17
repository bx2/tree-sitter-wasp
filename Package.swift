// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterWasp",
    products: [
        .library(name: "TreeSitterWasp", targets: ["TreeSitterWasp"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterWasp",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterWaspTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterWasp",
            ],
            path: "bindings/swift/TreeSitterWaspTests"
        )
    ],
    cLanguageStandard: .c11
)
