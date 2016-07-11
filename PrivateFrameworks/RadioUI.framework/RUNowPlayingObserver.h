/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@interface RUNowPlayingObserver : MPNowPlayingObserver {
    MPCRadioPlaybackCoordinator * _playbackCoordinator;
}

- (void).cxx_destruct;
- (void)_buyOffersDidChangeNotification:(id)arg1;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_isInWishListDidChangeNotification:(id)arg1;
- (bool)_itemNotificationIsRelevantToObservedPlayer:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)initWithPlayer:(id)arg1 playbackCoordinator:(id)arg2;

@end