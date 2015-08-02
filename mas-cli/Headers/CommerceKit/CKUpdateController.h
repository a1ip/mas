//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKServiceInterface.h"

@interface CKUpdateController : CKServiceInterface
{
//    CDUnknownBlockType _dialogHandler;
}

+ (CKUpdateController *)sharedUpdateController;
//@property(copy) CDUnknownBlockType dialogHandler; // @synthesize dialogHandler=_dialogHandler;
//- (void).cxx_destruct;
- (void)promptUserToOptInForAutoUpdateWithShowNotification:(BOOL)arg1;
- (BOOL)shouldPromptForAutoUpdateOptIn;
- (BOOL)isAutoUpdatedEnabled;
- (id)installedUpdatesJournal;
- (BOOL)softwareUpdateCatalogIsSeedCatalog;
- (long long)softwareUpdateCatalogTrustLevel;
- (int)catalogTrustLevel;
- (id)catalogHostName;
- (void)stopObservingOSUpdateProgressWithCallback:(id)arg1;
//- (id)observerOSUpdateProgressWithProgressHandler:(CDUnknownBlockType)arg1;
- (void)stopObservingOSUpdateScansWithCallback:(id)arg1;
//- (id)observerOSUpdateScansWithProgressHandler:(CDUnknownBlockType)arg1;
- (void)startOSUpdateScanWithForceFullScan:(BOOL)arg1 reportProgressImmediately:(BOOL)arg2 launchedFromNotification:(BOOL)arg3 userHasSeenAllUpdates:(BOOL)arg4 checkForOtherUpdates:(BOOL)arg5;
- (void)unhideAllOSUpdates;
- (void)hideOSUpdatesWithProductKeys:(id)arg1;
- (BOOL)hasHiddenOSUpdates;
- (BOOL)osUpdateScanInProgress;
- (id)_updateFailureDialogWithAuditInfo:(id)arg1;
- (BOOL)_otherUsersAreLoggedIn;
- (void)showUpdateFailureWithAuditToken:(id)arg1;
- (void)removeUpdateFromInstallLaterWithBundleID:(id)arg1;
- (id)appUpdatesToBeInstalledLater;
- (id)osUpdatesToBeInstalledLater;
- (id)osUpdatesToBeInstalledAfterLogout;
- (void)cancelUpdatesToBeInstalledLater;
- (void)installAvailableUpdatesLaterWithMode:(long long)arg1;
- (BOOL)shouldOfferDoItLater;
- (void)installAllAvailableUpdates;
//- (void)startAppUpdates:(id)arg1 andOSUpdates:(id)arg2 withDelegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
//- (void)checkForUpdatesWithUserHasSeenUpdates:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAvailableUpdatesObserver:(id)arg1;
//- (id)addAvailableUpdatesObserverWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)availableUpdatesBadgeCount;
- (id)incompatibleUpdates;
- (id)availableUpdateWithItemIdentifier:(unsigned long long)arg1;
- (id)availableUpdates;
- (id)init;

@end

