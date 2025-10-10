// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "lifestream-XCFramework",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "LifestreamSDK",
            targets: ["LifestreamSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "LifestreamSDK",
            path: "LifestreamSDK.xcframework"
        )
    ]
)
