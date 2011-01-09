/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSString, NSError, NSDate, NSDictionary, NSAttributedString;



@interface FZMessage : NSObject <NSCoding, NSCopying, IMSecureObject>
{
    NSString *_sender;
    NSDate *_time;
    NSAttributedString *_body;
    NSDictionary *_attributes;
    NSArray *_fileTransferGUIDs;
    NSInteger _flags;
    NSError *_error;
    NSString *_guid;
    NSString *_subject;
    NSString *_URL;
}


- (void)setSubject:(id)arg1;
- (void)setError:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(NSInteger)arg6 error:(id)arg7 guid:(id)arg8;
- (void)setFileTransferGUIDs:(id)arg1;
- (id)fileTransferGUIDs;
- (BOOL)isAlert;
- (NSInteger)flags;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (void)setURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTime:(id)arg1;
- (id)body;
- (id)URL;
- (id)time;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEmpty;
- (void)setSender:(id)arg1;
- (BOOL)isFinished;
- (void)setSecurityLevel:(NSInteger)arg1;
- (NSInteger)securityLevel;
- (void)setFlags:(NSInteger)arg1;
- (id)subject;
- (id)guid;
- (id)error;
- (void)setBody:(id)arg1;
- (id)sender;
- (void)_cleanMessage;
- (BOOL)isPrepared;
- (void)adjustIsEmptyFlag;

@end