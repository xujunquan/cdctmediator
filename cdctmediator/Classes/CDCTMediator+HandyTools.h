//
//  CDCTMediator+HandyTools.h
//  cdctmediator
//
//  Created by xujunquan on 2023/9/11.
//
#if TARGET_OS_IOS

#import "CDCTMediator.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CDCTMediator (HandyTools)
- (UIViewController * _Nullable)topViewController NS_EXTENSION_UNAVAILABLE_IOS("not available on iOS (App Extension)");

- (UIWindow * _Nullable)keyWindow NS_EXTENSION_UNAVAILABLE_IOS("not available on iOS (App Extension)");

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated NS_EXTENSION_UNAVAILABLE_IOS("not available on iOS (App Extension)");

- (void)presentViewController:(UIViewController *)viewControllerToPresent animated:(BOOL)animated completion:(void (^ _Nullable )(void))completion NS_EXTENSION_UNAVAILABLE_IOS("not available on iOS (App Extension)");
@end

NS_ASSUME_NONNULL_END

#endif
