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
    .package(url: "https://github.com/IDN-Media/lifestream-XCFramework", from: "2.0.0")
]
```

## Usage

### Setup
```swift
import LifestreamSDK

// In your App init or AppDelegate
Lifestream.shared.configure(
    keyId: "your-key-id",
    keySecret: "your-key-secret",
    organization: "your-organization"
) { config in
    config.sandbox = false
    config.verbose = false
    config.cache { cache in
        cache.enabled = true
        cache.ttl = 30 * 60 // seconds
        cache.maxSize = 200
        cache.sessionOnly = false
    }
}
```

### Create Link
```swift
// Simple
Lifestream.shared.createLink(
    targetUrl: "https://example.com/product/123",
    deepLink: "myapp://product/123",
    onSuccess: { shortUrl in print("Created: \(shortUrl)") },
    onError: { error in print("Error: \(error)") }
)

// With options
Lifestream.shared.createLink(
    targetUrl: "https://example.com/product/123",
    deepLink: "myapp://product/123",
    onSuccess: { shortUrl in print("Created: \(shortUrl)") },
    onError: { error in print("Error: \(error)") }
) { options in
    options.name = "Product Link"
    options.slug = "my-link"
    options.prefix = "custom"
    options.expiresAt = "2024-12-31T23:59:59Z"
}
```

### Resolve Deeplink
```swift
Lifestream.shared.resolveDeeplink(
    url: "https://org.idn.link/s/slug",
    onSuccess: { deeplink in handleDeeplink(deeplink) },
    onError: { error in print("Error: \(error)") }
)
```

### Cache

The SDK caches created links and resolved deep links automatically. Identical `createLink` calls return the cached URL without a network request. Resolved deep links are served from cache with background revalidation when stale.

```swift
// Clear all cached data
Lifestream.shared.clearCache()
```

## Requirements

- iOS 16.0+
- Xcode 16.0+
- Swift 5.0+

## License

See [LICENSE.md](LICENSE.md) for license information.
