#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "CDConfig.h"
#import "CDCTMediator+bcmessage.h"
#import "CDCTMediator+cdhome.h"
#import "CDCTMediator+HandyTools.h"
#import "CDCTMediator.h"
#import "CDCTMediatorHeader.h"

FOUNDATION_EXPORT double cdctmediatorVersionNumber;
FOUNDATION_EXPORT const unsigned char cdctmediatorVersionString[];

