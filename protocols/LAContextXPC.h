/* Generated by RuntimeBrowser.
 */

@protocol LAContextXPC

@required

- (void)enterPassword:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)evaluateACL:(void *)arg1 operation:(void *)arg2 options:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSData *, int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)evaluatePolicy:(void *)arg1 options:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)failProcessedEvent:(void *)arg1 failureError:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: int, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)serverPropertyForOption:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 11: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)setCredential:(void *)arg1 type:(void *)arg2 onlyGet:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSData *, int, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)setServerPropertyForOption:(void *)arg1 value:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: int, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*

@end