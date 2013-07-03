/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSNumber, NSURL;

@interface SAAlarmUpdate : SADomainCommand  {
}

@property(copy) NSArray * addedFrequency;
@property(copy) NSURL * alarmId;
@property(copy) NSNumber * enabled;
@property(copy) NSNumber * hour;
@property(copy) NSString * label;
@property(copy) NSNumber * minute;
@property(copy) NSArray * removedFrequency;

+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)update;

- (void)setRemovedFrequency:(id)arg1;
- (id)removedFrequency;
- (void)setAddedFrequency:(id)arg1;
- (id)addedFrequency;
- (void)setAlarmId:(id)arg1;
- (id)alarmId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)label;
- (void)setEnabled:(id)arg1;
- (id)enabled;
- (id)minute;
- (id)hour;
- (void)setMinute:(id)arg1;
- (void)setHour:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)groupIdentifier;

@end