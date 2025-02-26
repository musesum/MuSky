// swift-tools-version: 5.9

import PackageDescription

let package = Package(
    name: "MuSky",
    platforms: [.iOS(.v17)],
    products: [.library(name: "MuSky", targets: ["MuSky"])],
    dependencies: [
        .package(url: "https://github.com/musesum/MuFlo.git", branch: "dev"),
    ],
    targets: [
        .target(name: "MuSky",
                dependencies: [
                    .product(name: "MuFlo", package: "MuFlo")],
                resources: [.process("Resources")]),
        .testTarget(
            name: "MuSkyTests",
            dependencies: ["MuFlo"]),
        
    ]
)
