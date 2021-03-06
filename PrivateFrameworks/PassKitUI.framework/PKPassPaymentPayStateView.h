/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate> {
    <PKPassPaymentPayStateViewDelegate> * _delegate;
    bool  _enhancedContrast;
    PKGlyphView * _glyph;
    double  _glyphViewPadding;
    UILabel * _label;
    double  _labelAlpha;
    double  _labelTopPadding;
    bool  _persistentEmulationHint;
    long long  _state;
    long long  _style;
    bool  _touchRecognizingHint;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPaymentPayStateViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKGlyphView *glyph;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) double labelAlpha;
@property (nonatomic) bool persistentEmulationHint;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool touchRecognizingHint;

- (void).cxx_destruct;
- (void)_applyStateWithTextOverride:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)_attributedTextWithTitle:(id)arg1;
- (id)_attributedTextWithTitle:(id)arg1 subtitle:(id)arg2;
- (bool)_canEmphasizeState:(long long)arg1;
- (void)_configureLayoutMetrics;
- (id)_labelForState:(long long)arg1 textOverride:(id)arg2;
- (id)_textForState:(long long)arg1 textOverride:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (id)glyph;
- (void)glyphView:(id)arg1 revealingCheckmark:(bool)arg2;
- (id)initWithStyle:(long long)arg1 enhancedContrast:(bool)arg2;
- (id)label;
- (double)labelAlpha;
- (void)layoutSubviews;
- (bool)persistentEmulationHint;
- (void)setDelegate:(id)arg1;
- (void)setLabelAlpha:(double)arg1;
- (void)setPersistentEmulationHint:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 textOverride:(id)arg2 animated:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setTouchRecognizingHint:(bool)arg1;
- (long long)state;
- (bool)touchRecognizingHint;

@end
