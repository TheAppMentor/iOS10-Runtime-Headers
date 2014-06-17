/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUInputStream>;

@interface OISFUOffsetInputStream : NSObject <SFUInputStream> {
    <SFUInputStream> *mInputStream;
    long long mInitialOffset;
}


- (id)initWithInputStream:(id)arg1;
- (id)closeLocalStream;
- (void)enableSystemCaching;
- (void)disableSystemCaching;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (id)initWithInputStream:(id)arg1 initialOffset:(long long)arg2;
- (void)seekToOffset:(long long)arg1;
- (bool)canSeek;
- (long long)offset;
- (void)close;
- (void)dealloc;

@end