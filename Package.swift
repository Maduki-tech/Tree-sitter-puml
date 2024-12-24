// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterPlantumlSitter",
    products: [
        .library(name: "TreeSitterPlantumlSitter", targets: ["TreeSitterPlantumlSitter"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterPlantumlSitter",
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
            name: "TreeSitterPlantumlSitterTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterPlantumlSitter",
            ],
            path: "bindings/swift/TreeSitterPlantumlSitterTests"
        )
    ],
    cLanguageStandard: .c11
)
