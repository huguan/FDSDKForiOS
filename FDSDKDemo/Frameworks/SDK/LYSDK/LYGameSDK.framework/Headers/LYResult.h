//
//  LYResult.h
//  LYDemoSDK
//
//  Created by LG on 16/8/19.
//  Copyright (c) 2016年 LG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LYResult : NSObject

@property (nonatomic, assign) int code;
@property (nonatomic, copy) NSString* msg;
@property (nonatomic, copy) NSString* msgLocal;
- (BOOL) isOK;


+ (LYResult*) withEmpty;
+ (LYResult*) withSucc;
+ (LYResult*) withCode:(int)code;
+ (LYResult*) withCodeMsg:(int)code msg:(NSString*)msg;
+ (LYResult*) withCodeLang:(int)code lang:(NSString*)lang;
+ (LYResult*) withMsgLang:(int)code msg:(NSString*)msg lang:(NSString*)lang;
- (void) setWithCode:(int)code;
- (void) setWithCodeMsg:(int)code msg:(NSString*)msg;
- (void) setWithCodeLang:(int)code lang:(NSString*)lang;
- (void) setWithCodeMsgLang:(int)code msg:(NSString*)msg lang:(NSString*)lang;
- (NSString *) getDataMsg;

@end
