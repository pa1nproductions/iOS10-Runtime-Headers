/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitCollectionsDataSource : PXCollectionsDataSource {
    NSArray * __collectionListBySection;
    NSArray * __collectionsFetchResultBySection;
    NSDictionary * __collectionsIndexPathsByCollection;
    NSDictionary * __keyAssetsFetchResultsByCollection;
    NSArray * __virtualCollections;
}

@property (nonatomic, readonly) NSArray *_collectionListBySection;
@property (nonatomic, readonly) NSArray *_collectionsFetchResultBySection;
@property (nonatomic, readonly) NSDictionary *_collectionsIndexPathsByCollection;
@property (nonatomic, readonly) NSDictionary *_keyAssetsFetchResultsByCollection;
@property (nonatomic, readonly) NSArray *_virtualCollections;

- (void).cxx_destruct;
- (id)_assetAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionListAtSimpleIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)_collectionListBySection;
- (id)_collectionsFetchResultBySection;
- (id)_collectionsIndexPathsByCollection;
- (id)_keyAssetsFetchResultsByCollection;
- (id)_virtualCollections;
- (id)collectionAtIndexPath:(id)arg1;
- (bool)collectionIsCloudShared:(id)arg1;
- (bool)collectionIsCloudSharedAndOwned:(id)arg1;
- (bool)collectionIsEvents:(id)arg1;
- (bool)collectionIsFaces:(id)arg1;
- (bool)collectionIsFavoriteMemories:(id)arg1;
- (bool)collectionIsFolder:(id)arg1;
- (bool)collectionIsHiddenAlbum:(id)arg1;
- (bool)collectionIsImports:(id)arg1;
- (bool)collectionIsPeople:(id)arg1;
- (bool)collectionIsPlaces:(id)arg1;
- (bool)collectionIsRecentlyDeletedAlbum:(id)arg1;
- (bool)collectionIsScenes:(id)arg1;
- (bool)collectionIsSmartFolder:(id)arg1;
- (bool)collectionIsStandIn:(id)arg1;
- (bool)collectionIsSynced:(id)arg1;
- (bool)collectionIsVirtualCollection:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (void)enumerateCollectionsUsingBlock:(id /* block */)arg1;
- (id)indexPathForCollection:(id)arg1;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)init;
- (id)initWithCollectionListBySection:(id)arg1 collectionsFetchResultBySection:(id)arg2 keyAssetsFetchResultsByCollection:(id)arg3 collectionsIndexPathsByCollection:(id)arg4 virtualCollections:(id)arg5;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;

@end