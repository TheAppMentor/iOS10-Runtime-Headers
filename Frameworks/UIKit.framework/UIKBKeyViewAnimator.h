/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate> {
    bool  _disabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldPurgeKeyViews;
@property (readonly) Class superclass;

+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;

- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (Class)_keyViewClassForSpecialtyKey:(id)arg1;
- (double)delayedDeactivationTimeForKeyView:(id)arg1;
- (bool)disabled;
- (void)endTransitionForKeyView:(id)arg1;
- (void)gestureTransitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (void)gestureTransitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 direction:(int)arg3;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (id)keycapAlternateBackspaceInvertedTransform;
- (id)keycapAlternateBackspaceTransform;
- (id)keycapAlternateSpaceInvertedTransform;
- (id)keycapAlternateSpaceTransform;
- (id)keycapAlternateStandardInvertedTransform;
- (id)keycapAlternateStandardTransform;
- (id)keycapLeftInvertedTransform;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapLeftSelectPrimaryInvertedTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (id)keycapLeftSelectRightInvertedTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapLeftStandardTransform;
- (id)keycapMeshTransformFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)keycapNullTransform;
- (id)keycapPrimaryBackspaceInvertedTransform;
- (id)keycapPrimaryBackspaceTransform;
- (id)keycapPrimaryExitInvertedTransform;
- (id)keycapPrimaryExitTransform;
- (id)keycapPrimarySpaceInvertedTransform;
- (id)keycapPrimarySpaceTransform;
- (id)keycapPrimaryStandardInvertedTransform;
- (id)keycapPrimaryStandardTransform;
- (id)keycapRightInvertedTransform;
- (id)keycapRightSelectLeftInvertedTransform;
- (id)keycapRightSelectLeftTransform;
- (id)keycapRightSelectPrimaryInvertedTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapRightSelectRightTransform;
- (id)keycapRightStandardTransform;
- (void)reset;
- (void)setDisabled:(bool)arg1;
- (bool)shouldAssertCurrentKeyState:(id)arg1;
- (bool)shouldPurgeKeyViews;
- (bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id /* block */)arg4;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id /* block */)arg4;
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(bool)arg3;
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize { double x1; double x2; })arg2;

@end
