/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@class NSString, <CHPhoneBookManagerProtocol>, NSDate, NSNumber, NSMutableArray;

@interface CHRecentCall : CHSynchronizedLoggable <NSSecureCoding, NSCopying> {
    bool_read;
    bool_callerIdIsBlocked;
    bool_multiCall;
    bool_callerIdIsFormatted;
    bool_answered;
    bool_mobileOriginated;
    unsigned int _callerIdAvailability;
    unsigned int _callType;
    unsigned int _callStatus;
    NSString *_callerNetworkName;
    NSString *_uniqueId;
    NSString *_devicePhoneId;
    NSString *_callerId;
    NSDate *_date;
    double _duration;
    NSNumber *_bytesOfDataUsed;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    NSNumber *_disconnectedCause;
    NSString *_callerNetworkFirstName;
    NSString *_callerNetworkSecondName;
    NSString *_callerIdLabel;
    NSString *_callerIdLocation;
    unsigned long long _unreadCount;
    NSMutableArray *_callOccurrences;
    NSString *_addressBookRecordId;
    NSString *_addressBookCallerIDMultiValueId;
    NSString *_callerName;
    <CHPhoneBookManagerProtocol> *_phoneBookManager;
}

@property(copy) NSString * uniqueId;
@property(copy) NSString * devicePhoneId;
@property(copy) NSString * callerId;
@property(copy) NSString * callerNetworkName;
@property unsigned int callType;
@property unsigned int callStatus;
@property(copy) NSDate * date;
@property double duration;
@property(copy) NSNumber * bytesOfDataUsed;
@property bool read;
@property(copy) NSString * isoCountryCode;
@property(copy) NSString * mobileCountryCode;
@property(copy) NSString * mobileNetworkCode;
@property(copy) NSNumber * disconnectedCause;
@property unsigned int callerIdAvailability;
@property bool callerIdIsBlocked;
@property(copy) NSString * callerNetworkFirstName;
@property(copy) NSString * callerNetworkSecondName;
@property(copy) NSString * callerIdLabel;
@property(copy) NSString * callerIdLocation;
@property unsigned long long unreadCount;
@property(retain) NSMutableArray * callOccurrences;
@property(copy) NSString * addressBookRecordId;
@property(copy) NSString * addressBookCallerIDMultiValueId;
@property(copy) NSString * callerName;
@property bool multiCall;
@property bool callerIdIsFormatted;
@property(retain) <CHPhoneBookManagerProtocol> * phoneBookManager;
@property bool answered;
@property bool mobileOriginated;

+ (id)callStatusAsString:(unsigned int)arg1;
+ (id)callTypeAsString:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void)setMobileOriginated:(bool)arg1;
- (bool)mobileOriginated;
- (bool)representsCallAtDate:(id)arg1;
- (id)callerIdSubStringForDisplay;
- (id)callerIdLocation;
- (id)callerIdLabel;
- (id)callerIdForDisplay;
- (id)callerNameForDisplay;
- (id)callerName;
- (bool)callerIdIsEmailAddress;
- (id)addressBookCallerIDMultiValueId;
- (bool)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (id)callOccurrencesAsStringSync;
- (void)setCallerIdIsFormatted:(bool)arg1;
- (bool)callerIdIsFormatted;
- (id)callerNameForDisplaySync;
- (id)getLocalizedStringSync:(id)arg1;
- (id)callerIdForDisplaySync;
- (void)fetchAndSetAddressBookIdsSync;
- (bool)callerIdIsEmailAddressSync;
- (void)createOccurrenceArraySync;
- (unsigned long long)numberOfOccurrencesSync;
- (void)addOccurrencesFromArraySync:(id)arg1;
- (bool)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2;
- (bool)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1;
- (bool)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1;
- (bool)isAddressBookContactASuggestion;
- (bool)isAddressBookContactASuggestionSync;
- (id)addressBookRecordId;
- (id)phoneBookManager;
- (void)setCallerName:(id)arg1;
- (id)callerNameSync;
- (void)setAddressBookCallerIDMultiValueId:(id)arg1;
- (id)addressBookCallerIDMultiValueIdSync;
- (void)setAddressBookRecordId:(id)arg1;
- (id)addressBookRecordIdSync;
- (id)callOccurrencesSync;
- (void)setCallerIdLocation:(id)arg1;
- (id)callerIdLocationSync;
- (void)setCallerIdLabel:(id)arg1;
- (id)callerIdLabelSync;
- (void)setCallerNetworkSecondName:(id)arg1;
- (id)callerNetworkSecondName;
- (void)setCallerNetworkFirstName:(id)arg1;
- (id)callerNetworkFirstName;
- (void)setCallerIdIsBlocked:(bool)arg1;
- (bool)callerIdIsBlocked;
- (void)setPhoneBookManager:(id)arg1;
- (void)setDevicePhoneId:(id)arg1;
- (void)setCallerIdAvailability:(unsigned int)arg1;
- (void)setCallerNetworkName:(id)arg1;
- (void)setDisconnectedCause:(id)arg1;
- (void)setCallerId:(id)arg1;
- (bool)answered;
- (id)devicePhoneId;
- (unsigned int)callerIdAvailability;
- (id)callerNetworkName;
- (id)bytesOfDataUsed;
- (id)disconnectedCause;
- (void)setAnswered:(bool)arg1;
- (bool)multiCall;
- (void)setMultiCall:(bool)arg1;
- (void)setCallOccurrences:(id)arg1;
- (void)setBytesOfDataUsed:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)callOccurrences;
- (unsigned long long)numberOfOccurrences;
- (id)coalescingHash;
- (bool)coalesceWithCall:(id)arg1 withStrategy:(id)arg2;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (unsigned int)callType;
- (void)addressBookChanged;
- (bool)read;
- (void)setUnreadCount:(unsigned long long)arg1;
- (unsigned long long)unreadCount;
- (void)setIsoCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (id)isoCountryCode;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (id)uniqueId;
- (void)setDuration:(double)arg1;
- (void)setRead:(bool)arg1;
- (id)callerId;
- (unsigned int)callStatus;
- (id)init;
- (id)date;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (void)setDate:(id)arg1;

@end