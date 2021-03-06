/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface _QLItemProviderDownloadOperation : _QLDownloadOperation <QLPreviewItemURLProviderDownloadTracker>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canBeCanceled;
- (bool)cancel;
- (bool)performDownload;
- (void)updatedURLWithProgress:(double)arg1;

@end
