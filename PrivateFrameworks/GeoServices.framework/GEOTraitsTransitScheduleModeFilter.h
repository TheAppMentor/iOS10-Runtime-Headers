/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int numAdditionalDepartures : 1; 
    }  _has;
    unsigned int  _numAdditionalDepartures;
    GEOTraitsTransitScheduleTimeRange * _timeRange;
}

@property (nonatomic) bool hasNumAdditionalDepartures;
@property (nonatomic, readonly) bool hasTimeRange;
@property (nonatomic) unsigned int numAdditionalDepartures;
@property (nonatomic, retain) GEOTraitsTransitScheduleTimeRange *timeRange;

- (void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned int)arg3;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumAdditionalDepartures;
- (bool)hasTimeRange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAdditionalDepartures;
- (bool)readFrom:(id)arg1;
- (void)setHasNumAdditionalDepartures:(bool)arg1;
- (void)setNumAdditionalDepartures:(unsigned int)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end
