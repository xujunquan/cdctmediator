//
//  CDCTMediator+bcmessage.h
//  cdctmediator
//
//  Created by xujunquan on 2023/9/10.
//

#import "CDCTMediator.h"

NS_ASSUME_NONNULL_BEGIN

#define TargetMessage @"BCMessage"
#define ActionGetMessageHome @"getMessageHome"
#define ActionGetMessageConfig @"getConfig"


@interface CDCTMediator (bcmessage)

- (id)messageTest;
- (NSObject *)getMessageConfig;
- (UIViewController *)getMessageController;

@end

NS_ASSUME_NONNULL_END
