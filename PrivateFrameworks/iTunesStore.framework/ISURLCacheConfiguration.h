/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
    unsigned long long _diskCapacity;
    unsigned long long _memoryCapacity;
    NSString *_persistentIdentifier;
}

@property unsigned long long diskCapacity;
@property unsigned long long memoryCapacity;
@property(copy) NSString * persistentIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)diskCapacity;
- (unsigned long long)memoryCapacity;
- (id)persistentIdentifier;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (void)setPersistentIdentifier:(id)arg1;

@end