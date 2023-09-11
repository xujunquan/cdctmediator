//
//  CDCTMediator+cdhome.m
//  cdctmediator
//
//  Created by xujunquan on 2023/9/11.
//

#import "CDCTMediator+cdhome.h"

#define TargetHome          @"BCHome"
#define ActionGetHome       @"getHome"
#define ActionInitHomeWithConfig @"initWithConfig"
#define ActionHomeTest      @"homeTest"

@implementation CDCTMediator (cdhome)

- (void)homeTest {
    [[CDCTMediator sharedInstance] performTarget:TargetHome action:ActionHomeTest params:nil shouldCacheTarget:NO];
}

- (void)initHomeWithConfig:(NSDictionary *)config {
    [[CDCTMediator sharedInstance] performTarget:TargetHome action:ActionInitHomeWithConfig params:config shouldCacheTarget:NO];
}

- (UIViewController *)getHomeController {
    UIViewController *home = [[CDCTMediator sharedInstance] performTarget:TargetHome action:ActionGetHome params:nil shouldCacheTarget:NO];
    return home;
}

@end
