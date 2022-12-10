// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "KitabooBookShelfLocal",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "KitabooBookShelfLocal",
            targets: ["KitabooBookShelfLocal", "KitabooBookShelfFramework", "Kitaboo_Reader_SDK", "KitabooSDKWithReader"]),//, "KitabooBookShelfFramework", "Kitaboo_Reader_SDK", "KitabooSDKWithReader"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        .binaryTarget(name: "KitabooBookShelfFramework", url: "https://github.com/M2085/BVBRemotePackage/blob/main/KitabooBookShelfFramework.xcframework.zip", checksum: "0be95f207c2725fa0310df9a27c1ad29e0359e3b3613693a0ae9358370d5db9f"),
        .binaryTarget(name: "Kitaboo_Reader_SDK", url: "https://github.com/M2085/BVBRemotePackage/blob/main/Kitaboo_Reader_SDK.xcframework.zip", checksum: "605ae26dd183efa4ee6fd737b93aa614ea3fd0ffa99ed1312a95e5bea76c4cd5"),
        .binaryTarget(name: "KitabooSDKWithReader", url: "https://github.com/M2085/BVBRemotePackage/blob/main/KitabooSDKWithReader.xcframework.zip", checksum: "2376333bc863a5a6ac1db9bc706388824f53188edb9cf94c96506a46f50e630a"),
        .target(
            name: "KitabooBookShelfLocal",
            dependencies: []),
        .testTarget(
            name: "KitabooBookShelfLocalTests",
            dependencies: ["KitabooBookShelfLocal"]),
    ]
)
