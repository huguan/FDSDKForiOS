//
//  HN669Push.h
//  HN669SDKCore
//
//  Created by xiezhiyong on 2017/1/10.
//  Copyright © 2017年 HN669sdk. All rights reserved.
//

#ifndef HN669Push_h
#define HN669Push_h

#import <Foundation/Foundation.h>

//分享接口
@protocol IHN669Push

//  执行通知
-(void)scheduleNotification:(NSString*)args;

//  开始推送
-(void)startPush;

//  停止推送
-(void)stopPush;

//  添加tag
-(void)addTags:(NSString*)tags;

//  删除tag
-(void)removeTags:(NSString*)tag;

//  添加别名
-(void)addAlias:(NSString*)alias;

//  删除别名
-(void)removeAlias:(NSString*)alias;

@end

@interface HN669Push : NSObject<IHN669Push>

/// 分享接口实现
@property (strong, nonatomic) NSObject<IHN669Push>* push;

/// 获取HN669SDKShare的单例
+(instancetype) sharedInstance;

@end

#endif /* HN669Push_h */
