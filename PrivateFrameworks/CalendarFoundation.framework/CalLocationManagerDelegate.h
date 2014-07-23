/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>, NSString, NSObject<OS_dispatch_queue>, CLLocation;

@interface CalLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocation *_currentLocation;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    bool_didFinish;
}

@property(retain) CLLocation * currentLocation;
@property(copy) id completionBlock;
@property bool didFinish;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setDidFinish:(bool)arg1;
- (bool)didFinish;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)setCurrentLocation:(id)arg1;
- (id)currentLocation;
- (void)timeout;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)stopTimer;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)startTimer;

@end