//
//  CDCTMediator+bcmessage.m
//  cdctmediator
//
//  Created by xujunquan on 2023/9/10.
//

#import "CDCTMediator+bcmessage.h"

#define TargetMessage           @"BCMessage"
#define ActionGetMessageHome    @"getMessageHome"
#define ActionInitMessageWithConfig @"initWithConfig"
#define ActionMessageTest       @"messageTest"

@implementation CDCTMediator (bcmessage)

- (void)initMessageWithConfig:(NSDictionary *)config {
    [[CDCTMediator sharedInstance] performTarget:TargetMessage action:ActionInitMessageWithConfig params:config shouldCacheTarget:NO];
}

- (UIViewController *)getMessageController {
    UIViewController *message = [[CDCTMediator sharedInstance] performTarget:TargetMessage action:ActionGetMessageHome params:nil shouldCacheTarget:NO];
    return message;
}

- (void)messageTest {
    [[CDCTMediator sharedInstance] performTarget:TargetMessage action:ActionMessageTest params:nil shouldCacheTarget:NO];
}

@end
