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
import LifestreamSDK

// In your App init or AppDelegate
Lifestream.shared.configure(
    appId: "your-app-id",
    secretKey: "your-secret-key",
    organization: "your-organization"
)
```

### Create Link
```swift
// Minimal
let params = CreateLinkParams(
    targetUrl: "https://example.com/product/123",
    deepLink: "myapp://product/123",
    prefix: nil,
    name: nil
)

// With optional prefix and name
let params = CreateLinkParams(
    targetUrl: "https://example.com/product/123",
    deepLink: "myapp://product/123",
    prefix: "custom",
    name: "Product Link"
)

Lifestream.shared.createLink(
    params: params,
    onSuccess: { shortUrl in print("Created: \(shortUrl)") },
    onError: { error in print("Error: \(error)") }
)
```

### Resolve Deeplink
```swift
Lifestream.shared.resolveDeeplink(
    url: url.absoluteString,
    onSuccess: { deeplink in handleDeeplink(deeplink) },
    onError: { error in print("Error: \(error)") }
)
```

## Requirements

- iOS 18.2+
- Xcode 16.0+
- Swift 5.0+

## License

See [LICENSE.md](LICENSE.md) for license information.
