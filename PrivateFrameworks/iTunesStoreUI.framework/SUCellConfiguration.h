/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIView<SUCellConfigurationView>;

@interface SUCellConfiguration : NSObject  {
    id _context;
    unsigned int _isDeleteConfirmationVisible : 1;
    struct CGSize { 
        float width; 
        float height; 
    } _layoutSize;
    unsigned int _needsDisplay : 1;
    id _representedObject;
    UIView<SUCellConfigurationView> *_view;
}

@property(retain) id context;
@property(retain) id representedObject;
@property struct CGSize { float x1; float x2; } layoutSize;
@property BOOL needsDisplay;
@property UIView<SUCellConfigurationView> * view;
@property(readonly) unsigned int numberOfImages;
@property(readonly) unsigned int numberOfLabels;
@property BOOL isDeleteConfirmationVisible;

+ (id)copyDefaultContext;
+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
+ (float)minimumRowHeight;
+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAccessoryViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsDeleteConfirmationVisible:(BOOL)arg1;
- (BOOL)isDeleteConfirmationVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForImageAtIndex:(unsigned int)arg1;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (unsigned int)numberOfImages;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (int)textAlignmentForLabelAtIndex:(unsigned int)arg1;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned int)arg1;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLabels;
- (void)drawWithModifiers:(unsigned int)arg1;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)indexOfLabelForPurchaseAnimation;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (BOOL)needsDisplay;
- (void)dealloc;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (struct CGSize { float x1; float x2; })layoutSize;
- (void)setView:(id)arg1;
- (id)view;
- (void)reloadData;

@end