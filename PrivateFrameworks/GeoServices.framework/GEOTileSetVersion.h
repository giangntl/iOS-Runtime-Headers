/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetVersion : PBCodable <NSCopying> {
    struct { 
        unsigned int supportedLanguagesVersion : 1; 
        unsigned int timeToLiveSeconds : 1; 
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_genericTiles;
    unsigned long long _genericTilesCount;
    unsigned long long _genericTilesSpace;
    } _has;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
}

@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }* availableTiles;
@property(readonly) unsigned long long availableTilesCount;
@property(readonly) struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }* genericTiles;
@property(readonly) unsigned long long genericTilesCount;
@property bool hasSupportedLanguagesVersion;
@property bool hasTimeToLiveSeconds;
@property unsigned int identifier;
@property unsigned int supportedLanguagesVersion;
@property unsigned int timeToLiveSeconds;

- (void)addAvailableTiles:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addGenericTile:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)availableTiles;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })availableTilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableTilesCount;
- (void)clearAvailableTiles;
- (void)clearGenericTiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })genericTileAtIndex:(unsigned long long)arg1;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)genericTiles;
- (unsigned long long)genericTilesCount;
- (bool)hasSupportedLanguagesVersion;
- (bool)hasTimeToLiveSeconds;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvailableTiles:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setGenericTiles:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setHasSupportedLanguagesVersion:(bool)arg1;
- (void)setHasTimeToLiveSeconds:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setSupportedLanguagesVersion:(unsigned int)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg1;
- (unsigned int)supportedLanguagesVersion;
- (unsigned int)timeToLiveSeconds;
- (void)writeTo:(id)arg1;

@end