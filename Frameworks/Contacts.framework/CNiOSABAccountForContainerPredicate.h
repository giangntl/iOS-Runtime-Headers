/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABAccountForContainerPredicate : CNPredicate <CNiOSAccountPredicate> {
    NSString *_containerIdentifier;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (struct __CFArray { }*)cn_copyAccountsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)containerIdentifier;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)arg1;

@end
