/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSString, NSData, NSDictionary;

@interface PKBarcode : NSObject <NSSecureCoding> {
    NSData *_messageData;
    NSDictionary *_options;
    int _format;
    NSString *_altText;
}

@property(copy) NSData * messageData;
@property(copy) NSDictionary * options;
@property int format;
@property(copy) NSString * altText;

+ (BOOL)supportsSecureCoding;

- (BOOL)isTall;
- (void)setAltText:(id)arg1;
- (void)setMessageData:(id)arg1;
- (id)altText;
- (id)initWithBarcodeDictionary:(id)arg1;
- (void)setFormat:(int)arg1;
- (int)format;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (void)setOptions:(id)arg1;
- (id)options;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)messageData;
- (id)_imageFromTextMessage;
- (id)_imageFromBarcodeMessage;
- (id)image;

@end