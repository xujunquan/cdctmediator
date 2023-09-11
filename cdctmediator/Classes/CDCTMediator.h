//
//  CDCTMediator.h
//  cdctmediator
//
//  Created by xujunquan on 2023/9/10.
//

#import <Foundation/Foundation.h>

extern NSString * _Nonnull const kCTMediatorParamsKeySwiftTargetModuleName;

@interface CDCTMediator : NSObject

+ (instancetype _Nonnull)sharedInstance;

// 远程App调用入口
- (id _Nullable)performActionWithUrl:(NSURL * _Nullable)url completion:(void(^_Nullable)(NSDictionary * _Nullable info))completion;
// 本地组件调用入口
- (id _Nullable )performTarget:(NSString * _Nullable)targetName action:(NSString * _Nullable)actionName params:(NSDictionary * _Nullable)params shouldCacheTarget:(BOOL)shouldCacheTarget;
- (void)releaseCachedTargetWithFullTargetName:(NSString * _Nullable)fullTargetName;
// 检查 是否有引源码
- (BOOL)check:(NSString * _Nullable)targetName moduleName:(NSString * _Nullable)moduleName;
@end
  
// 简化调用单例的函数
CDCTMediator* _Nonnull CT(void);
