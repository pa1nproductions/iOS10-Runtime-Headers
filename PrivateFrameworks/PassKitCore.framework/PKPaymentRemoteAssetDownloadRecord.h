/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSURL, NSDictionary;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {
    NSURL *_passURL;
    NSDictionary *_remoteAssetsByTaskIdentifier;
}

@property(retain) NSURL * passURL;
@property(retain) NSDictionary * remoteAssetsByTaskIdentifier;

+ (bool)supportsSecureCoding;

- (void)setRemoteAssetsByTaskIdentifier:(id)arg1;
- (id)remoteAssetsByTaskIdentifier;
- (void)removeRemoteAssetForTaskIdentifier:(id)arg1;
- (void)setRemoteAsset:(id)arg1 forTaskIdentifier:(id)arg2;
- (id)passURL;
- (void)setPassURL:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end