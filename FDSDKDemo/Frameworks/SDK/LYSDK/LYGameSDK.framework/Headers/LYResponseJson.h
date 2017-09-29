//
//  LYResponseJson.h
//  LYPlatform
//
//  Created by wanghui on 14/11/29.
//  Copyright 2014 linnyou Inc.. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LYResponse.h"

@interface LYResponseJson : LYResponse


+(LYResponseJson*)withResponse:(LYResponse*)response;

@end
