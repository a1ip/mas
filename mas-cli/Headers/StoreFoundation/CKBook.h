//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, SSPurchase;

@interface CKBook : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isLocal;
    NSString *_path;
    NSString *_title;
    NSString *_author;
    NSString *_category;
    NSString *_sortName;
    NSDate *_purchaseDate;
    NSString *_uniqueIdentifier;
    NSNumber *_itemIdentifier;
    NSNumber *_publicationVersion;
    NSString *_publicationDisplayVersion;
    NSDictionary *_bookInfo;
    NSDictionary *_iTunesMetaData;
    NSString *_redownloadBuyParams;
    NSNumber *_downloadAssetSize;
    NSString *_updateBuyParams;
    NSDate *_expectedReleaseDate;
    NSNumber *_daapPurchasedToken;
    NSNumber *_daapItemIdentifier;
    NSURL *_coverImageURL;
    NSNumber *_jaliscoItemIdentifier;
    NSMutableDictionary *_externalMetadata;
}

+ (id)_imageFetchQueue;
+ (BOOL)supportsSecureCoding;
@property(retain) NSMutableDictionary *externalMetadata; // @synthesize externalMetadata=_externalMetadata;
@property(copy) NSNumber *jaliscoItemIdentifier; // @synthesize jaliscoItemIdentifier=_jaliscoItemIdentifier;
@property(copy) NSURL *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(copy) NSNumber *daapItemIdentifier; // @synthesize daapItemIdentifier=_daapItemIdentifier;
@property(copy) NSNumber *daapPurchasedToken; // @synthesize daapPurchasedToken=_daapPurchasedToken;
@property(copy) NSDate *expectedReleaseDate; // @synthesize expectedReleaseDate=_expectedReleaseDate;
@property(copy) NSString *updateBuyParams; // @synthesize updateBuyParams=_updateBuyParams;
@property(copy) NSNumber *downloadAssetSize; // @synthesize downloadAssetSize=_downloadAssetSize;
@property(copy) NSString *redownloadBuyParams; // @synthesize redownloadBuyParams=_redownloadBuyParams;
@property(copy) NSDictionary *iTunesMetaData; // @synthesize iTunesMetaData=_iTunesMetaData;
@property(copy) NSDictionary *bookInfo; // @synthesize bookInfo=_bookInfo;
@property(copy) NSString *publicationDisplayVersion; // @synthesize publicationDisplayVersion=_publicationDisplayVersion;
@property(copy) NSNumber *publicationVersion; // @synthesize publicationVersion=_publicationVersion;
@property(copy, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(copy) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(copy) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(copy) NSString *sortName; // @synthesize sortName=_sortName;
@property(copy) NSString *category; // @synthesize category=_category;
@property(copy) NSString *author; // @synthesize author=_author;
@property(copy) NSString *title; // @synthesize title=_title;
@property BOOL isLocal; // @synthesize isLocal=_isLocal;
@property(copy) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)getItemIdentifier;
@property(readonly) BOOL isPreorder;
@property(readonly) SSPurchase *updatePurchase;
@property(readonly) SSPurchase *redownloadPurchase;
- (void)fetchCoverImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_copyLibraryPropertiesFromBook:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)description;
- (BOOL)isEqualToBook:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

