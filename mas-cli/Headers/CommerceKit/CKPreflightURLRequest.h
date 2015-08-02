//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSRequest.h"

#import "ISStoreURLOperationDelegate.h"

@class NSArray, NSDictionary, NSString;

@interface CKPreflightURLRequest : SSRequest <ISStoreURLOperationDelegate>
{
    NSArray *_identifiers;
    NSDictionary *_preflightURLs;
}

@property(readonly) NSDictionary *preflightURLs; // @synthesize preflightURLs=_preflightURLs;
- (void).cxx_destruct;
- (void)_sendErrorToDelegate:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id *)arg2;
- (id)initWithBundleIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

