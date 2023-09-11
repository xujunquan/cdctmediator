//
//  CDCTMediator+cdhome.h
//  cdctmediator
//
//  Created by xujunquan on 2023/9/11.
//

#import "CDCTMediator.h"

NS_ASSUME_NONNULL_BEGIN

#define TargetHome @"BCHome"
#define ActionGetHome @"getHome"
#define ActionGetConfig @"getConfig"

@interface CDCTMediator (cdhome)

- (id)homeTest;
- (NSObject *)getHomeConfig;
- (UIViewController *)getHomeController;

@end

NS_ASSUME_NONNULL_END
