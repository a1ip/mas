//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKServiceInterface.h"

@class NSArray, NSLock, NSMutableDictionary, CKDownloadQueueClient;
@protocol CKDownloadQueueObserver;

@interface CKDownloadQueue : CKServiceInterface
{
    NSMutableDictionary *_downloadsByItemID;
    NSLock *_downloadsLock;
}

+ (CKDownloadQueue *)sharedDownloadQueue;
//- (void).cxx_destruct;
- (BOOL)cacheReceiptDataForDownload:(id)arg1;
- (void)checkStoreDownloadQueueForAccount:(id)arg1;
- (void)recoverAvailableDiskSpace;
- (void)lockedApplicationTriedToLaunchAtPath:(id)arg1;
- (void)unlockApplicationsWithBundleIdentifier:(id)arg1;
- (void)lockApplicationsForBundleID:(id)arg1;
//- (void)fetchIconForItemIdentifier:(unsigned long long)arg1 atURL:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)removeDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)cancelDownload:(id)arg1 promptToConfirm:(BOOL)arg2 askToDelete:(BOOL)arg3;
- (void)resumeDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)pauseDownloadWithItemIdentifier:(unsigned long long)arg1;
- (void)addDownload:(id)arg1;
- (id)downloadForItemIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *downloads; // @dynamic downloads;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(id<CKDownloadQueueObserver>)arg1;
- (id)addObserver:(id)arg1 forDownloadTypes:(long long)arg2;
//- (id)addObserverForDownloadTypes:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithStoreClient:(id)arg1;

@end

