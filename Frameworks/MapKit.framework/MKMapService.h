/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSLock;

@interface MKMapService : NSObject  {
    NSArray *_activeInputModeLanguages;
    NSLock *_activeInputModesLock;
}

+ (id)sharedService;

- (id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 traits:(id)arg3;
- (void)_mapItemsForResponseData:(id)arg1 handler:(id)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapRegion:(id)arg2 zoomLevel:(double)arg3;
- (void)submitUsageForTraitsWithAction:(int)arg1 flyoverAnimationID:(unsigned long long)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1;
- (id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(struct { double x1; double x2; })arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2;
- (void)submitUsageForTraits:(id)arg1;
- (id)ticketForURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 traits:(id)arg5;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 includeETA:(bool)arg3 traits:(id)arg4;
- (id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3;
- (id)_activeInputModeLanguages;
- (id)defaultTraitsWithTraits:(id)arg1;
- (void)_invalidateActiveInputModeLanguages;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2;
- (id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned int)arg3 includeETA:(bool)arg4 traits:(id)arg5;
- (id)ticketForMUIDs:(id)arg1 includeETA:(bool)arg2 traits:(id)arg3;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)defaultTraits;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end