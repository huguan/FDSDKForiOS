//
//  SAppInfo.h
//
//  Created by dev on 2017/8/7.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SEntityBase.h"

@interface SAppInfo : SEntityBase

typedef NS_ENUM(NSUInteger, SDirection)
{
    SDirectionLandscape,
    SDirectionPortrait
};

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *shortName;
@property (readonly) SDirection direction;

@end
