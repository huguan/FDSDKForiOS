//
//  LYResponse.h
//  LYPlatform
//
//  Created by wanghui on 14/11/29.
//  Copyright 2014 linnyou Inc.. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LYResponse : NSObject

+(LYResponse*) emptyResponse;

@property (nonatomic, assign) int code;
@property (nonatomic,readwrite,retain) id  bodyData;
-(NSString*) asString;

@end
