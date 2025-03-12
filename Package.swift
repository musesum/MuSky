// swift-tools-version: 5.9

import PackageDescription

let package = Package(
    name: "MuSky",
    platforms: [.iOS(.v17)],
    products: [.library(name: "MuSky", targets: ["MuSky"])],
    dependencies: [],
    targets: [
        .target(name: "MuSky",
                dependencies: [],
                resources: [.process("Resources")]),
        
    ]
)
