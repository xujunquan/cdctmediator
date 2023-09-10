//
//  CDCTMediator+bcmessage.m
//  cdctmediator
//
//  Created by xujunquan on 2023/9/10.
//

#import "CDCTMediator+bcmessage.h"

@implementation CDCTMediator (bcmessage)

- (UIViewController *)getMessageHome {
    UIViewController *message = [[CDCTMediator sharedInstance] performTarget:TargetMessage action:ActionGetHome params:nil shouldCacheTarget:NO];
    return message;
}

- (NSObject *)getConfig {
    NSObject *config = [[CDCTMediator sharedInstance] performTarget:TargetMessage action:ActionGetConfig params:nil shouldCacheTarget:NO];
    return config;
}

@end
