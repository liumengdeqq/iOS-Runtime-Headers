/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString;

@interface CAStateRemoveElement : CAStateElement  {
    NSString *_keyPath;
    id _object;
}

@property(copy) NSString * keyPath;
@property(retain) id object;


- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setObject:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (id)object;
- (id)keyPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)apply:(id)arg1;
- (BOOL)matches:(id)arg1;

@end