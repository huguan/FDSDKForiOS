//
//  LYDataJson.h
//  LYPlatform
//
//  Created by wanghui on 14/11/29.
//  Copyright 2014 linnyou Inc.. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LYResult.h"

@interface LYDataJson : NSObject

@property (nonatomic, retain) LYResult* result;
@property (nonatomic, retain) NSMutableDictionary* infoDict;
+(LYDataJson*) withDictionary:(NSDictionary*)dict checkInfo:(BOOL)checkInfo;

-(BOOL) isOK;
-(NSString*)originalAsString;


@end
