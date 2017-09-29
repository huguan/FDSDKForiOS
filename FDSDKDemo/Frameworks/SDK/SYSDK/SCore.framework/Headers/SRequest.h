//
//  SRequest.h
//
//  Created by dev on 2017/8/7.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SError.h"

@interface SRequest : NSObject

typedef NS_ENUM(NSUInteger, SHttpMethod)
{
    SHttpMethodGet,
    SHttpMethodPost
};

typedef void (^OnRequestSuccess)(SRequest *request, id response);
typedef void (^OnRequestFailure)(SRequest *request, SError *error);

@property (readonly) SHttpMethod method;
@property (readonly, copy) NSString *url;
@property (readonly, copy) NSDictionary<NSString *, NSString *> *params;
@property (readonly) OnRequestSuccess success;
@property (readonly) OnRequestFailure failure;

- (instancetype)initWithHttpMethod:(SHttpMethod)method
                               URL:(NSString *)url
                            params:(NSDictionary<NSString *, NSString *> *)params
                           success:(OnRequestSuccess)success
                           failure:(OnRequestFailure)failure;
- (void)asyncExecute;
- (void)cancel;

@end
