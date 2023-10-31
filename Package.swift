// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PIARegions",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "PIARegions",
            targets: ["PIARegions"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "PIARegions",
            path: "./PIARegions.xcframework"
        ),
    ]
)
