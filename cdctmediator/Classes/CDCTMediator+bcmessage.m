//
//  CDCTMediator+bcmessage.m
//  cdctmediator
//
//  Created by xujunquan on 2023/9/10.
//

#import "CDCTMediator+bcmessage.h"

@implementation CDCTMediator (bcmessage)

- (id)messageTest {
    return [self getMessageConfig];
}

- (id)getMessageConfig {
    id config = [[CDCTMediator sharedInstance] performTarget:TargetMessage action:ActionGetMessageConfig params:nil shouldCacheTarget:NO];
    return config;
}

- (UIViewController *)getMessageController {
    UIViewController *message = [[CDCTMediator sharedInstance] performTarget:TargetMessage action:ActionGetMessageHome params:nil shouldCacheTarget:NO];
    return message;
}


@end
