//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>


@class IGDirectShareRecipient, NSHashTable, NSString;

@interface IGDirectContentUploadInfo : NSObject
{
    _Bool _isViaRealtime;
    IGDirectShareRecipient *_recipient;
    NSString *_threadID;
    NSString *_uploadIndexKey;
    long long _uploadStatus;
    double _uploadProgress;
    unsigned long long _autoRetryCount;
    NSHashTable *_observers;
}

@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned long long autoRetryCount; // @synthesize autoRetryCount=_autoRetryCount;
@property(nonatomic) _Bool isViaRealtime; // @synthesize isViaRealtime=_isViaRealtime;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(copy, nonatomic) NSString *uploadIndexKey; // @synthesize uploadIndexKey=_uploadIndexKey;
@property(retain, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(retain, nonatomic) IGDirectShareRecipient *recipient; // @synthesize recipient=_recipient;

- (id)description;
- (id)stringForUploadStatus:(long long)arg1;
- (void)removeUploadObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *digestDescription;
- (id)initWithRecipient:(id)arg1;

@end

