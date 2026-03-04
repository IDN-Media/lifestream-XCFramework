# Lifestream XCFramework

Swift Package Manager distribution for Lifestream SDK.

## Installation

### Swift Package Manager

**Xcode:**
1. File → Add Package Dependencies
2. URL: `https://github.com/IDN-Media/lifestream-XCFramework`
3. Select version and add to target

**Package.swift:**
```swift
dependencies: [
    .package(url: "https://github.com/IDN-Media/lifestream-XCFramework", from: "1.2.0")
]
```

## Usage

### Setup
```swift
import Lifestream

Lifestream.shared.configure(
    appId: "your-app-id",
    secretKey: "your-secret-key", 
    organization: "your-organization"
)
```

### Create Link
```swift
Task {
    try await Lifestream.shared.createLink(
        targetUrl: "https://example.com/product/123",
        deepLink: "myapp://product/123",
        onSuccess: { shortUrl in print("Created: \(shortUrl)") },
        onError: { error in print("Error: \(error)") },
        prefix: "custom", // Optional: custom domain prefix (e.g., "custom.idn.link")
        name: "Product Link" // Optional
    )
}
```

### Resolve Deeplink
```swift
Task {
    try await Lifestream.shared.resolveDeeplink(
        url: url.absoluteString,
        onSuccess: { deeplink in handleDeeplink(deeplink) },
        onError: { error in print("Error: \(error)") }
    )
}
```

## Requirements

- iOS 13.0+
- Xcode 12.0+
- Swift 5.3+

## License

See [LICENSE.md](LICENSE.md) for license information.
