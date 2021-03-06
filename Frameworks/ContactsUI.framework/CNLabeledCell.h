/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNLabeledCell : CNContactCell {
    UIImageView * _chevron;
    NSDictionary * _labelTextAttributes;
    NSDictionary * _valueTextAttributes;
}

@property (nonatomic, readonly) double bottomBaselineConstant;
@property (nonatomic, readonly) UIImageView *chevron;
@property (nonatomic, readonly) double chevronWidth;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, copy) NSDictionary *labelTextAttributes;
@property (nonatomic, readonly) UIView<ABText> *labelView;
@property (nonatomic, readonly) UIView *rightMostView;
@property (nonatomic, readonly) UILabel *standardLabelView;
@property (nonatomic, readonly) UILabel *standardValueView;
@property (nonatomic, readonly) double topBaselineConstant;
@property (nonatomic, readonly) NSString *valueString;
@property (nonatomic, copy) NSDictionary *valueTextAttributes;
@property (nonatomic, readonly) UIView<ABText> *valueView;

+ (bool)wantsChevron;
+ (bool)wantsHorizontalLayout;
+ (bool)wantsStandardConstraints;

- (void).cxx_destruct;
- (double)bottomBaselineConstant;
- (id)chevron;
- (double)chevronWidth;
- (id)constantConstraints;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForStandardLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelString;
- (id)labelTextAttributes;
- (id)labelView;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (id)standardLabelView;
- (id)standardValueView;
- (void)tintColorDidChange;
- (double)topBaselineConstant;
- (id)valueString;
- (id)valueTextAttributes;
- (id)valueView;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;
- (id)variableConstraintsForStandardLayout;
- (id)variableConstraintsForVerticalLayout;

@end
