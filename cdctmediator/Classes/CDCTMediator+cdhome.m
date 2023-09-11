//
//  CDCTMediator+cdhome.m
//  cdctmediator
//
//  Created by xujunquan on 2023/9/11.
//

#import "CDCTMediator+cdhome.h"

@implementation CDCTMediator (cdhome)

- (id)homeTest {
    return [self getHomeConfig];
}

- (id)getHomeConfig {
    id config = [[CDCTMediator sharedInstance] performTarget:TargetHome action:ActionGetConfig params:nil shouldCacheTarget:NO];
    return config;
}

- (UIViewController *)getHomeController {
    UIViewController *home = [[CDCTMediator sharedInstance] performTarget:TargetHome action:ActionGetHome params:nil shouldCacheTarget:NO];
    return home;
}

@end
