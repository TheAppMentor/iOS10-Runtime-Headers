/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent> {
    bool  _batchedTransactionDequeueIsScheduled;
    NSMutableArray * _batchedTransactions;
    NSObject<OS_dispatch_queue> * _batchedTransactionsQueue;
    CPLEngineClientCache * _clientCache;
    CPLEngineCloudCache * _cloudCache;
    CPLEngineChangePipe * _deletePushQueue;
    CPLEngineDerivativesCache * _derivativesCache;
    CPLEngineResourceDownloadQueue * _downloadQueue;
    CPLEngineLibrary * _engineLibrary;
    CPLEngineIDMapping * _idMapping;
    CPLPlatformObject * _platformObject;
    CPLEngineChangePipe * _pullQueue;
    CPLEngineChangePipe * _pushQueue;
    CPLEngineQuarantinedRecords * _quarantinedRecords;
    CPLEngineRemappedDeletes * _remappedDeletes;
    NSMutableArray * _resetEvents;
    NSURL * _resetEventsURL;
    CPLEngineResourceStorage * _resourceStorage;
    unsigned long long  _state;
    NSHashTable * _storages;
    bool  _supportedFeatureVersionIsMostRecent;
    CPLEngineTransientRepository * _transientPullRepository;
    CPLEngineResourceUploadQueue * _uploadQueue;
}

@property (nonatomic, readonly) CPLEngineClientCache *clientCache;
@property (nonatomic, readonly) CPLEngineCloudCache *cloudCache;
@property (nonatomic, readonly) id corruptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) CPLEngineChangePipe *deletePushQueue;
@property (nonatomic, readonly) CPLEngineDerivativesCache *derivativesCache;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineResourceDownloadQueue *downloadQueue;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPLEngineIDMapping *idMapping;
@property (readonly) NSDate *libraryCreationDate;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) CPLEngineChangePipe *pullQueue;
@property (nonatomic, readonly) CPLEngineChangePipe *pushQueue;
@property (nonatomic, readonly) bool pushQueuesAreFull;
@property (nonatomic, readonly) CPLEngineQuarantinedRecords *quarantinedRecords;
@property (nonatomic, readonly) CPLEngineRemappedDeletes *remappedDeletes;
@property (nonatomic, readonly) CPLEngineResourceStorage *resourceStorage;
@property (nonatomic, readonly) bool shouldGenerateDerivatives;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NSArray *storages;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportedFeatureVersionIsMostRecent;
@property (nonatomic, readonly) CPLEngineTransientRepository *transientPullRepository;
@property (nonatomic, readonly) CPLEngineResourceUploadQueue *uploadQueue;

+ (id)platformImplementationProtocol;
+ (id)stateDescriptionForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_canRead;
- (bool)_canWrite;
- (id)_currentTransaction;
- (void)_performTransaction:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)_removeTransactionOnCurrentThread:(id)arg1;
- (id)_resetEventsDescriptions;
- (bool)_resetLocalSyncStateWithError:(id*)arg1;
- (void)_scheduleBatchedTransactionsLocked;
- (void)_setTransactionOnCurrentThread:(id)arg1;
- (void)_storeResetEvent:(id)arg1 cause:(id)arg2;
- (void)assertCanRead;
- (void)assertCanWrite;
- (id)clientCache;
- (id)clientCacheIdentifier;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)cloudCache;
- (id)componentName;
- (id)corruptionInfo;
- (id)createNewLibraryVersion;
- (void)dealloc;
- (id)deletePushQueue;
- (id)derivativesCache;
- (id)description;
- (id)downloadQueue;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)idMapping;
- (id)initWithEngineLibrary:(id)arg1;
- (bool)isClientInSyncWithClientCache;
- (id)lastQuarantineCountReportDate;
- (id)libraryCreationDate;
- (id)libraryVersion;
- (id)libraryZoneName;
- (void)noteResetSyncFinished;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)performBatchedWriteTransactionWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)performReadTransactionWithBlock:(id /* block */)arg1;
- (id)performWriteTransactionWithBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)platformObject;
- (id)pullQueue;
- (id)pushQueue;
- (bool)pushQueuesAreFull;
- (id)quarantinedRecords;
- (void)registerStorage:(id)arg1;
- (id)remappedDeletes;
- (bool)resetCompleteSyncStateWithCause:(id)arg1 error:(id*)arg2;
- (bool)resetLocalSyncStateWithCause:(id)arg1 error:(id*)arg2;
- (bool)resetSyncAnchorWithCause:(id)arg1 error:(id*)arg2;
- (id)resourceStorage;
- (void)setState:(unsigned long long)arg1;
- (bool)shouldGenerateDerivatives;
- (unsigned long long)state;
- (id)storages;
- (bool)storeClientIsInSyncWithClientCacheWithError:(id*)arg1;
- (bool)storeLastQuarantineCountReportDate:(id)arg1 error:(id*)arg2;
- (bool)storeLibraryVersion:(id)arg1 withError:(id*)arg2;
- (bool)storeLibraryZoneName:(id)arg1 error:(id*)arg2;
- (bool)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 error:(id*)arg2;
- (bool)storeUserIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)supportedFeatureVersionInLastSync;
- (bool)supportedFeatureVersionIsMostRecent;
- (id)transientPullRepository;
- (id)uploadQueue;
- (id)userIdentifier;

@end
