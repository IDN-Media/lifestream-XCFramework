# Lifestream XCFramework

Swift Package Manager distribution for Lifestream SDK.

## Installation

For iOS installation instructions, see the main [README.md](../README.md#ios) in the project root.

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
        onSuccess: { shortUrl in print("Created: \(shortUrl)") },
        onError: { error in print("Error: \(error)") }
    ) { builder in
        builder.targetUrl = "https://example.com/product/123"
        builder.deepLink = "myapp://product/123"
        builder.name = "Product Link"
    }
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