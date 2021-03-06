/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFValueAddedServiceSession : NFSession <NFValueAddedServiceSessionCallbacks> {
    NFWeakReference *_delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFValueAddedServiceSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_didError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didPerformValueAddedServiceTransactions:(id)arg1;
- (void)didSelectValueAddedService:(BOOL)arg1;
- (void)didStartSession:(id)arg1;
- (void)endSession;
- (void)setDelegate:(id)arg1;
- (void)setHostCards:(id)arg1;
- (BOOL)startHostCardEmulation;
- (BOOL)stopHostCardEmulation;

@end
