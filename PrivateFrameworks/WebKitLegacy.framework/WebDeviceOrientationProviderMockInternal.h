/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDeviceOrientationProviderMockInternal : NSObject  {
    struct OwnPtr<WebCore::DeviceOrientationClientMock> { 
        struct DeviceOrientationClientMock {} *m_ptr; 
    } m_core;
}


- (void)setController:(struct DeviceOrientationController { }*)arg1;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (void)setOrientation:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end