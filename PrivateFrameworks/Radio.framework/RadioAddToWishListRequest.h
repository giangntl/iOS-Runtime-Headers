/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSString, RadioTrack, SSURLConnectionRequest;

@interface RadioAddToWishListRequest : RadioRequest {
    long long _action;
    SSURLConnectionRequest *_request;
    NSString *_stationHash;
    long long _stationID;
    RadioTrack *_track;
    long long _trackStoreID;
}

@property long long action;
@property(readonly) long long trackStoreID;

- (void).cxx_destruct;
- (long long)action;
- (void)cancel;
- (id)init;
- (id)initWithTrack:(id)arg1 station:(id)arg2;
- (id)initWithTrackStoreID:(long long)arg1 stationID:(long long)arg2 stationHash:(id)arg3;
- (void)setAction:(long long)arg1;
- (void)startWithCompletionHandler:(id)arg1;
- (long long)trackStoreID;

@end