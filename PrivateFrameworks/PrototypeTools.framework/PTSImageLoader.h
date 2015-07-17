/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImageLoader : NSObject {
    <PTSImageLoaderDelegate> * _delegate;
    BOOL  _loading;
    NSString * _path;
}

@property (nonatomic) <PTSImageLoaderDelegate> *delegate;
@property (getter=isLoading) BOOL loading;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithPath:(id)arg1;
- (BOOL)isLoading;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)startLoading;
- (void)stopLoading;

@end