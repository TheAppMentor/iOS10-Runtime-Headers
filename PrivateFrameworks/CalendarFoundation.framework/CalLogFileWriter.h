/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSString;

@interface CalLogFileWriter : CalLogWriter  {
    NSString *_path;
    int _fileDescriptor;
    bool_fileDescriptorIsValid;
}

@property(retain) NSString * path;
@property int fileDescriptor;
@property bool fileDescriptorIsValid;


- (bool)fileDescriptorIsValid;
- (void)setFileDescriptorIsValid:(bool)arg1;
- (void)setFileDescriptor:(int)arg1;
- (id)initWithParameters:(id)arg1;
- (void)write:(id)arg1;
- (void)setPath:(id)arg1;
- (int)fileDescriptor;
- (id)path;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end