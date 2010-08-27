//
//  ContactManager.h
//  CocoaCamp
//
//  Created by Warren Moore on 7/22/10.
//  Copyright 2010 Auerhaus Development, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>
#import "BumpContact.h"

@interface ContactManager : NSObject {
	ABAddressBookRef addressBook;
}

+ (ContactManager *)sharedInstance;
- (NSError *)addContactForBumpContact:(BumpContact *)contact;

@end

@interface BumpContact (AddressBook)
	- (ABRecordRef)addressBookContact;
@end

BumpContact *BumpContactForAddressBookRecord(ABRecordRef record);
