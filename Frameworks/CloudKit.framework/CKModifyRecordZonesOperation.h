/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordZonesOperation : CKDatabaseOperation  {
    NSArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _modifyRecordZonesCompletionBlock;

    NSMutableArray *_savedRecordZones;
    NSMutableArray *_deletedRecordZoneIDs;
    NSMutableDictionary *_recordZonesByZoneIDs;
    NSMutableDictionary *_recordZoneErrors;
}

@property(copy) NSArray * recordZonesToSave;
@property(copy) NSArray * recordZoneIDsToDelete;
@property(copy) id modifyRecordZonesCompletionBlock;
@property(retain) NSMutableArray * savedRecordZones;
@property(retain) NSMutableArray * deletedRecordZoneIDs;
@property(retain) NSMutableDictionary * recordZonesByZoneIDs;
@property(retain) NSMutableDictionary * recordZoneErrors;


- (void)setRecordZoneErrors:(id)arg1;
- (void)setRecordZonesByZoneIDs:(id)arg1;
- (void)setDeletedRecordZoneIDs:(id)arg1;
- (void)setSavedRecordZones:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)setModifyRecordZonesCompletionBlock:(id)arg1;
- (id)modifyRecordZonesCompletionBlock;
- (id)savedRecordZones;
- (id)deletedRecordZoneIDs;
- (id)recordZoneErrors;
- (id)recordZonesByZoneIDs;
- (void)fillOutOperationInfo:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (id)recordZoneIDsToDelete;
- (void)setRecordZonesToSave:(id)arg1;
- (id)recordZonesToSave;
- (id)init;
- (void).cxx_destruct;

@end