/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUWallpaperActivity : PUActivity {
    bool  __needsUpdateWallpaperModificationAllowed;
    bool  __wallpaperModificationAllowed;
    UIViewController * _wallpaperActivityViewController;
}

@property (setter=_setNeedsUpdateWallpaperModificationAllowed:, nonatomic) bool _needsUpdateWallpaperModificationAllowed;
@property (getter=_isWallpaperModificationAllowed, setter=_setWallpaperModificationAllowed:, nonatomic) bool _wallpaperModificationAllowed;

- (void).cxx_destruct;
- (bool)_isWallpaperModificationAllowed;
- (bool)_needsUpdateWallpaperModificationAllowed;
- (void)_restrictionsChanged:(id)arg1;
- (void)_setNeedsUpdateWallpaperModificationAllowed:(bool)arg1;
- (void)_setWallpaperModificationAllowed:(bool)arg1;
- (void)_updateWallpaperModificationAllowedIfNeeded;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)prepareWithActivityItems:(id)arg1;
- (void)wallpaperImageViewControllerDidCancel:(id)arg1;
- (void)wallpaperImageViewControllerDidCropWallpaper:(id)arg1;
- (void)wallpaperImageViewControllerDidFinishSaving:(id)arg1;

@end