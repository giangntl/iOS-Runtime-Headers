/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface BirthdayCalendarManager : NSObject {
    BOOL _abSyncActive;
    void *_addressBook;
    BOOL _calSyncActive;
    unsigned int _failedAlarmUpdateAttempts;
    unsigned int _failedPopulateAttempts;
    BOOL _isAlarmUpdatePending;
    BOOL _isPopulatePending;
    NSOperationQueue *_queue;
    BOOL _running;
    NSTimer *_syncTimer;
    NSTimer *_throttleTimer;
    BOOL _wantsUpdatedWhileThrottled;
}

+ (void)setStateInPrefs:(int)arg1 withLastABSequence:(int)arg2;

- (void).cxx_destruct;
- (void)_killSyncTimer;
- (void)_killThrottleTimer;
- (void)_startThrottleTimer;
- (void)_throttleTimerFired:(id)arg1;
- (void)_updateIfNeeded;
- (void)abSyncDidEnd;
- (void)abSyncDidStart;
- (void)calSyncDidEnd;
- (void)calSyncDidStart;
- (void)dealloc;
- (void)killSyncTimer;
- (void)maybeUpdateAfterSyncEnd;
- (void)populate;
- (void)rebuild;
- (void)resetSyncTimer;
- (void)start;
- (void)stop;
- (void)syncTimerFired:(id)arg1;
- (void)updateAlarms;

@end