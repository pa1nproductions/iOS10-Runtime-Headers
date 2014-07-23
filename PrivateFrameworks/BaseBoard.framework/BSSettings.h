/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class <BSSettingDescriptionProvider>, NSMapTable, NSString;

@interface BSSettings : NSObject <NSCopying, NSMutableCopying, BSXPCCoding> {
    <BSSettingDescriptionProvider> *_descriptionProvider;
    NSMapTable *_settingToFlagMap;
    NSMapTable *_settingToObjectMap;
}

@property <BSSettingDescriptionProvider> * descriptionProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)boolForSetting:(unsigned long long)arg1;
- (id)descriptionProvider;
- (void)_applyToSettings:(id)arg1;
- (id)_newMapTable;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_enumerateSettingsInMap:(id)arg1 withBlock:(id)arg2;
- (void)_setObject:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)_setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (void)setDescriptionProvider:(id)arg1;
- (id)allSettings;
- (void)_enumerateSettingsForObjectsWithBlock:(id)arg1;
- (void)_enumerateSettingsForFlagsWithBlock:(id)arg1;
- (void)enumerateObjectsWithBlock:(id)arg1;
- (id)objectForSetting:(unsigned long long)arg1;
- (void)enumerateFlagsWithBlock:(id)arg1;
- (long long)flagForSetting:(unsigned long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)isEmpty;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end