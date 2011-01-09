/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInputPort, NSArray, AVCaptureOutput, NSMutableArray;



@interface AVCaptureConnectionInternal : NSObject 
{
    NSMutableArray *inputPorts;
    AVCaptureOutput *output;
    BOOL active;
    BOOL enabled;
    AVCaptureInputPort *audioInputPort;
    NSMutableArray *audioChannels;
    NSArray *audioChannelLevels;
    long long lastGetAudioLevelsTime;
    AVCaptureInputPort *videoInputPort;
    BOOL videoMirroringSupported;
    BOOL videoMirrored;
    BOOL videoMirroredIsSetByClient;
    BOOL videoOrientationSupported;
    NSInteger videoOrientation;
    BOOL videoOrientationIsSetByClient;
}



@end