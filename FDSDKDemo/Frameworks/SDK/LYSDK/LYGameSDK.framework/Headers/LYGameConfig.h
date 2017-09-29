//
//  LYGameConfig.h
//  LYDemoSDK
//
//  Created by LG on 16/8/23.
//  Copyright (c) 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>

#import "LYGameDefines.h"


@interface LYGameConfig : NSObject


+(LYGameConfig*) instance;

@property(nonatomic,readwrite,assign) NSString* location;           //发布区域（测试test，正式cn）
@property(nonatomic,readwrite,retain) NSString*      productId;          //产品id
@property(nonatomic,readwrite,retain) NSDictionary*  channelParameter;
@property(nonatomic,readwrite,assign) BOOL           debugState;         //是否开启调试状态
@property(nonatomic,readwrite,retain) NSString*  linnyouKey;        //麟游互动signkey
@property(nonatomic,readwrite,retain) NSString *dataMsg;    //获取uid的data信息

@property(nonatomic,readwrite,assign) BOOL deviceOrientationPortrait;//设备当前的位置朝向而改变
@property(nonatomic,readwrite,assign) BOOL deviceOrientationPortraitUpsideDown;
@property(nonatomic,readwrite,assign) BOOL deviceOrientationLandscapeLeft;
@property(nonatomic,readwrite,assign) BOOL deviceOrientationLandscapeRight;

@end
