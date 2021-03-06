/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTip : PBCodable <NSCopying> {
    struct { 
        unsigned int tipTime : 1; 
    }  _has;
    NSMutableArray * _snippets;
    NSString * _tipId;
    double  _tipTime;
    GEOPDUser * _tipster;
}

@property (nonatomic, readonly) bool hasTipId;
@property (nonatomic) bool hasTipTime;
@property (nonatomic, readonly) bool hasTipster;
@property (nonatomic, retain) NSMutableArray *snippets;
@property (nonatomic, retain) NSString *tipId;
@property (nonatomic) double tipTime;
@property (nonatomic, retain) GEOPDUser *tipster;

+ (Class)snippetType;
+ (id)tipsForPlaceData:(id)arg1;

- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTipId;
- (bool)hasTipTime;
- (bool)hasTipster;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTipTime:(bool)arg1;
- (void)setSnippets:(id)arg1;
- (void)setTipId:(id)arg1;
- (void)setTipTime:(double)arg1;
- (void)setTipster:(id)arg1;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (id)snippets;
- (unsigned long long)snippetsCount;
- (id)tipId;
- (double)tipTime;
- (id)tipster;
- (void)writeTo:(id)arg1;

@end
