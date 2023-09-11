//
//  CDCTMediator+bcmessage.h
//  cdctmediator
//
//  Created by xujunquan on 2023/9/10.
//

#import "CDCTMediator.h"

NS_ASSUME_NONNULL_BEGIN

@interface CDCTMediator (bcmessage)

- (void)messageTest;
- (void)initMessageWithConfig:(NSDictionary *)config;
- (UIViewController *)getMessageController;

@end

NS_ASSUME_NONNULL_END
