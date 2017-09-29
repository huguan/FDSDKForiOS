//
//  Qxdelegate.h
//  LSTabs
//
//  Created by qdazzle on 15/8/18.
//  Copyright (c) 2015年 Lucky Software. All rights reserved.
//


#import <Foundation/Foundation.h>

@protocol QXDelegate <NSObject>


@required

- (void) Logincallback :(NSDictionary*)result;

- (void) Registercallback: (NSDictionary*)result;

- (void) PayCallback:(NSDictionary *)result;

@end