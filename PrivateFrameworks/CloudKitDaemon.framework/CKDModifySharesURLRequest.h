/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDModifySharesURLRequest : CKDURLRequest  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareModifiedBlock;

    NSArray *_sharesToSave;
    NSArray *_shareIDsToDelete;
    NSMutableDictionary *_shareIDByRequestID;
    NSMutableDictionary *_participantIDByRequestID;
}

@property(copy) id shareModifiedBlock;
@property(retain) NSArray * sharesToSave;
@property(retain) NSArray * shareIDsToDelete;
@property(retain) NSMutableDictionary * shareIDByRequestID;
@property(retain) NSMutableDictionary * participantIDByRequestID;


- (void)setParticipantIDByRequestID:(id)arg1;
- (id)participantIDByRequestID;
- (void)setShareModifiedBlock:(id)arg1;
- (id)shareModifiedBlock;
- (void)setShareIDByRequestID:(id)arg1;
- (id)shareIDByRequestID;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void)setShareIDsToDelete:(id)arg1;
- (id)shareIDsToDelete;
- (void)setSharesToSave:(id)arg1;
- (id)sharesToSave;
- (id)initWithSharesToSave:(id)arg1 shareIDsToDelete:(id)arg2;
- (int)operationType;
- (void).cxx_destruct;

@end