/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSString, WKWebView, UIScrollView, UIView;

@interface WKPDFView : UIView <WKWebViewContentProvider, UIPDFPageViewDelegate> {
    struct RetainPtr<UIPDFDocument> { 
        void *m_ptr; 
    } _pdfDocument;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _suggestedFilename;
    struct RetainPtr<WKPDFPageNumberIndicator> { 
        void *m_ptr; 
    } _pageNumberIndicator;
    struct Vector<PDFPageInfo, 0, WTF::CrashOnOverflow> { 
        struct { /* ? */ } *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    } _pages;
    unsigned int _centerPageNumber;
    struct CGSize { 
        double width; 
        double height; 
    } _minimumSize;
    struct CGSize { 
        double width; 
        double height; 
    } _overlaidAccessoryViewsInset;
    WKWebView *_webView;
    UIScrollView *_scrollView;
    UIView *_fixedOverlayView;
    bool_isStartingZoom;
}

@property(readonly) NSString * suggestedFilename;
@property(readonly) struct CGPDFDocument { }* pdfDocument;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)web_setFixedOverlayView:(id)arg1;
- (void)web_computedContentInsetDidChange;
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize { double x1; double x2; })arg1;
- (void)web_setMinimumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;
- (id)web_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_offsetForPageNumberIndicator;
- (void)_updatePageNumberIndicator;
- (void)_revalidateViews;
- (void)_computePageAndDocumentFrames;
- (void)_clearPages;
- (struct CGPDFDocument { }*)pdfDocument;
- (id)suggestedFilename;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)zoom:(id)arg1 to:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 kind:(int)arg4;
- (void)resetZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end