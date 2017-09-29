//
//  YLInfoKit.h
//  YLPlatformSDK
//
//  Created by ning on 14-12-31.
//  Copyright (c) 2014年 ning. All rights reserved.
//

#import <UIKit/UIKit.h>

#define alertShow(aTitle, aMessage, cancelTitle, aButtonTitle, aTag) \
  {                                                                  \
    UIAlertView* alertView =                                         \
        [[UIAlertView alloc] initWithTitle:aTitle                    \
                                   message:aMessage                  \
                                  delegate:self                      \
                         cancelButtonTitle:cancelTitle               \
                         otherButtonTitles:aButtonTitle, nil];       \
    alertView.tag = aTag;                                            \
    [alertView show];                                                \
  };

#define alertShowNew(aMessage)     {[[YLInfoKit sharedInstance] alterWithMsg:aMessage];};

@class AppUserInfo;
@interface YLInfoKit : NSObject

@property(nonatomic, copy) NSString* appId;
@property(nonatomic, copy) NSString* appKey;

@property(nonatomic, copy) NSString* appGId;
@property(nonatomic, copy) NSString* appGKey;

@property(nonatomic, copy) NSString* introduction;
@property(nonatomic, copy) NSString* sourceid;

//支付包跳转回应用 Scheme
@property(nonatomic, copy) NSString* appScheme;

//是否调用相册或相机
@property(nonatomic, assign) BOOL  isPhotoLibrary;

@property(nonatomic, strong) AppUserInfo* appUserInfo;

//苹果内购或第三方支付
@property(nonatomic, assign) BOOL isIphonePay;

+ (YLInfoKit*)sharedInstance;

-(void)alterWithMsg:(NSString *)msg;
@end
