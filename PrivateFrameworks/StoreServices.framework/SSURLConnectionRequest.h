/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSURLConnectionRequestDelegate>, SSAuthenticationContext, NSURLRequest, SSURLRequestProperties;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    BOOL _runsInProcess;
    BOOL _shouldMescalSign;
}

@property(readonly) NSURLRequest * URLRequest;
@property(readonly) SSURLRequestProperties * requestProperties;
@property BOOL shouldMescalSign;
@property <SSURLConnectionRequestDelegate> * delegate;
@property(copy) SSAuthenticationContext * authenticationContext;
@property BOOL runsInProcess;

+ (id)newRadioRequestWithRequestProperties:(id)arg1;

- (void)setRunsInProcess:(BOOL)arg1;
- (id)requestProperties;
- (id)URLRequest;
- (void)setAuthenticationContext:(id)arg1;
- (void)setShouldMescalSign:(BOOL)arg1;
- (BOOL)shouldMescalSign;
- (id)authenticationContext;
- (BOOL)runsInProcess;
- (void)startWithConnectionResponseBlock:(id)arg1;
- (BOOL)_canRunInProcess;
- (id)initWithRequestProperties:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)start;
- (id)sendSynchronousRequestReturningError:(id*)arg1;

@end