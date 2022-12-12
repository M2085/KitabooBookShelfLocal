// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "KitabooBookShelfLocal",
    platforms: [
            .iOS(.v13),
        ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "KitabooBookShelfLocal",
            targets: ["KitabooBookShelfLocal"]),//, "KitabooBookShelfFramework", "Kitaboo_Reader_SDK", "KitabooSDKWithReader"]),//, "KitabooBookShelfFramework", "Kitaboo_Reader_SDK", "KitabooSDKWithReader"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
//        .binaryTarget(name: "KitabooBookShelfFramework", url: "https://github.com/M2085/BVBRemotePackage/blob/main/KitabooBookShelfFramework.xcframework.zip", checksum: "d90fdd45c819abb12b4db368157b76cba6e063b4046cdc3609a5eee649724eaa"),
//        .binaryTarget(name: "Kitaboo_Reader_SDK", url: "https://github.com/M2085/BVBRemotePackage/blob/main/Kitaboo_Reader_SDK.xcframework.zip", checksum: "0e992ed8645af03f4d17a362362683874310d88311bf740d5aff20a7a2c55607"),
//        .binaryTarget(name: "KitabooSDKWithReader", url: "https://github.com/M2085/BVBRemotePackage/blob/main/KitabooSDKWithReader.xcframework.zip", checksum: "328b44d1a58f82ca60701ce86a11c38873e05e8f87f74f040cd98d126ddae47c"),
        .target(
            name: "KitabooBookShelfLocal",
            dependencies: []),
        .testTarget(
            name: "KitabooBookShelfLocalTests",
            dependencies: ["KitabooBookShelfLocal"]),
    ]
)
