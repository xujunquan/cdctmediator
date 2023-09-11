//
//  CDCTMediator+cdhome.h
//  cdctmediator
//
//  Created by xujunquan on 2023/9/11.
//

#import <cdctmediator/cdctmediator.h>

NS_ASSUME_NONNULL_BEGIN

@interface CDCTMediator (cdhome)

- (void)homeTest;
- (void)initHomeWithConfig:(NSDictionary *)config;
- (UIViewController *)getHomeController;

@end

NS_ASSUME_NONNULL_END
