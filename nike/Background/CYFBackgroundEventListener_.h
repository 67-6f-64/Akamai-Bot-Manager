//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>
#import "CYFBackgroundEventListenerDelegate_.h"

@interface CYFBackgroundEventListener_ : NSObject

@property(nonatomic, weak) id <CYFBackgroundEventListenerDelegate_> eventDelegate; // @synthesize eventDelegate=_eventDelegate;

- (void)applicationBecomeInActive:(id)arg1;
- (void)applicationBecomeActive:(id)arg1;
- (id)initListener:(id)arg1;
- (void)dealloc;
- (id)init;

@end

