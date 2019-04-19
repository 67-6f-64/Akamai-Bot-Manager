//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSDate, NSString;

@interface CYFTextEvent_ : NSObject
{
    _Bool _isCopy;
    unsigned long long _eventType;
    long long _totalTextChangeEventCount;
    NSDate *_timeStamp;
    NSString *_textElementAddressString;
}

@property(nonatomic) _Bool isCopy; // @synthesize isCopy=_isCopy;
@property(retain, nonatomic) NSString *textElementAddressString; // @synthesize textElementAddressString=_textElementAddressString;
@property(retain, nonatomic) NSDate *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) long long totalTextChangeEventCount; // @synthesize totalTextChangeEventCount=_totalTextChangeEventCount;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;

- (instancetype)initWithEventType:(unsigned long long)arg1 eventCount:(long long)arg2 addressString:(id)arg3 andTimeStamp:(id)arg4 isCopy:(_Bool)arg5;

@end

