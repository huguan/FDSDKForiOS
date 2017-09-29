//
//  SHttpUtils.h
//
//  Created by  on 2017/8/9.
//  Copyright © 2017年 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRequest.h"

@interface SHttpUtils : NSObject

+ (SRequest *)requestWithPath:(NSString *)path
                       params:(NSDictionary<NSString *, NSString *> *)params
                      success:(OnRequestSuccess)success
                      failure:(OnRequestFailure)failure;

+ (SRequest *)requestWithURL:(NSString *)url
                      params:(NSDictionary<NSString *, NSString *> *)params
                     success:(OnRequestSuccess)success
                     failure:(OnRequestFailure)failure;

+ (SRequest *)requestWithHttpMethod:(SHttpMethod)httpMethod
                               path:(NSString *)path
                            success:(OnRequestSuccess)success
                            failure:(OnRequestFailure)failure;

+ (SRequest *)requestWithHttpMethod:(SHttpMethod)httpMethod
                               path:(NSString *)path
                            success:(OnRequestSuccess)success
                            failure:(OnRequestFailure)failure
                    addPublicParams:(BOOL)isAdd;

+ (SRequest *)requestWithHttpMethod:(SHttpMethod)httpMethod
                               path:(NSString *)path
                             params:(NSDictionary<NSString *, NSString *> *)params
                            success:(OnRequestSuccess)success
                            failure:(OnRequestFailure)failure;

+ (SRequest *)requestWithHttpMethod:(SHttpMethod)httpMethod
                               path:(NSString *)path
                             params:(NSDictionary<NSString *, NSString *> *)params
                            success:(OnRequestSuccess)success
                            failure:(OnRequestFailure)failure
                    addPublicParams:(BOOL)isAdd;

+ (SRequest *)requestWithHttpMethod:(SHttpMethod)httpMethod
                                URL:(NSString *)url
                            success:(OnRequestSuccess)success
                            failure:(OnRequestFailure)failure;

+ (SRequest *)requestWithHttpMethod:(SHttpMethod)httpMethod
                                URL:(NSString *)url
                            success:(OnRequestSuccess)success
                            failure:(OnRequestFailure)failure
                    addPublicParams:(BOOL)isAdd;

+ (SRequest *)requestWithHttpMethod:(SHttpMethod)httpMethod
                                URL:(NSString *)url
                             params:(NSDictionary<NSString *, NSString *> *)params
                            success:(OnRequestSuccess)success
                            failure:(OnRequestFailure)failure;

+ (SRequest *)requestWithHttpMethod:(SHttpMethod)httpMethod
                                URL:(NSString *)url
                             params:(NSDictionary<NSString *, NSString *> *)params
                            success:(OnRequestSuccess)success
                            failure:(OnRequestFailure)failure
                    addPublicParams:(BOOL)isAdd;

@end
