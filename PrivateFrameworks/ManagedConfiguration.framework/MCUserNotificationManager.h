/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCUserNotificationManager : NSObject {
}

@property(readonly) bool hasOutstandingNotifications;

+ (id)sharedManager;

- (void)cancelAllNotificationsCompletionBlock:(id)arg1;
- (void)dealloc;
- (void)displayUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButtonText:(id)arg3 alternateButtonText:(id)arg4 displayOnLockScreen:(bool)arg5 displayInAppWhitelistModes:(bool)arg6 dismissAfterTimeInterval:(double)arg7 assertion:(id)arg8 completionBlock:(id)arg9;
- (bool)hasOutstandingNotifications;
- (id)init;
- (void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(id)arg4;
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;
- (void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(id)arg4;

@end