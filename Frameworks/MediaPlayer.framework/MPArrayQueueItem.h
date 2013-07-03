/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, NSString;

@interface MPArrayQueueItem : NSObject  {
    MPAVItem *_item;
    NSString *_path;
    double _startTime;
    double _stopTime;
    NSString *_videoID;
}

@property(readonly) MPAVItem * item;
@property(copy) NSString * path;
@property double startTime;
@property double stopTime;
@property(copy) NSString * videoID;


- (void)setStopTime:(double)arg1;
- (id)initWithMPAVItem:(id)arg1;
- (id)videoID;
- (double)stopTime;
- (void)setVideoID:(id)arg1;
- (double)startTime;
- (id)init;
- (void).cxx_destruct;
- (void)setPath:(id)arg1;
- (id)path;
- (id)item;
- (void)setStartTime:(double)arg1;

@end