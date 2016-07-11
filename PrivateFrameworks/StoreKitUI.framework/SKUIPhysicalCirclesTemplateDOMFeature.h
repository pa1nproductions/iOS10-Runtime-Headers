/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPhysicalCirclesTemplateDOMFeature : NSObject <SKUIDOMFeature> {
    IKAppContext * _appContext;
    <SKUIPhysicalCirclesTemplateDelegate> * _delegate;
    NSMutableArray * _domUpdateBlocks;
    NSString * _featureName;
    NSMutableArray * _pendingAnimationRequests;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIPhysicalCirclesTemplateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (void)_addDOMUpdateBlock:(id /* block */)arg1;
- (void)_requestAnimation:(id)arg1;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (void)finishDOMUpdates;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (id)popPendingAnimationRequests;
- (void)setDelegate:(id)arg1;

@end