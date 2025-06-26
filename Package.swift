// swift-tools-version: 6.0

import PackageDescription

let package = Package(
    name: "MuSky",
    platforms: [.iOS(.v17), .visionOS(.v2)],
    products: [.library(name: "MuSky", targets: ["MuSky"])],
    dependencies: [],
    targets: [
        .target(name: "MuSky",
                dependencies: [],
                resources: [.process("Resources")]),
        
    ]
)
