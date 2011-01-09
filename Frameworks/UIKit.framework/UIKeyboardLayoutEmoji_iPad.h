/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton;



@interface UIKeyboardLayoutEmoji_iPad : UIKeyboardLayoutEmoji 
{
    UIButton *_spaceButton;
    UIButton *_dismissButton;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _spaceFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _dismissFrame;
}

@property(readonly) CGRect dismissFrame;
@property(readonly) CGRect spaceFrame;


- (void)spaceUp;
- (struct CGSize { float x1; float x2; })leftControlSize;
- (struct CGSize { float x1; float x2; })rightControlSize;
- (void)generateControlKeyRects;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })categoryFrame;
- (void)updateControlButtonImages;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })dismissFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })spaceFrame;
- (void)dismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;

@end