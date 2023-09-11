//
//  CDCTMediator+bcmessage.h
//  cdctmediator
//
//  Created by xujunquan on 2023/9/10.
//

#import "CDCTMediator.h"

NS_ASSUME_NONNULL_BEGIN

#define TargetMessage @"BCMessage"
#define ActionGetHome @"getMessageHome"
#define ActionGetConfig @"getConfig"


@interface CDCTMediator (bcmessage)

- (UIViewController *)getMessageHome;
- (NSObject *)getConfig;

@end

NS_ASSUME_NONNULL_END
