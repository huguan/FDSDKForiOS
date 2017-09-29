//
//  SModuleManager.h
//
//  Created by dev on 2017/8/31.
//  Copyright © 2017年 dev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SModule.h"

@interface SModuleManager : NSObject

+ (instancetype)getInstance;
- (void)addModule:(SModule *)newModule;
- (SModule *)getModule:(Class)cls;

@end
