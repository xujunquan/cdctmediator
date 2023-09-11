//
//  CDConfig.h
//  cdctmediator
//
//  Created by xujunquan on 2023/9/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CDConfig : NSObject
@property (nonatomic, copy) NSString *env;
@property (nonatomic, strong) NSMutableDictionary *config;

@end

NS_ASSUME_NONNULL_END

