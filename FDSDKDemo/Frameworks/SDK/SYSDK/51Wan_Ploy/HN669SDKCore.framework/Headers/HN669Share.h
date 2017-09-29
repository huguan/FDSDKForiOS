//
//  HN669Share.h
//  HN669Share
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 HN669sdk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HN669ShareInfo : NSObject

-(id)initWithDictionary:(NSDictionary*)dict;

-(NSString*) title;
-(NSString*) content;
-(NSString*) url;
-(NSString*) imgUrl;

-(id)valueForKey:(NSString *)key;
-(void)setValue:(id)value forKey:(NSString *)key;

@end

//分享接口
@protocol IHN669Share

-(void)share:(HN669ShareInfo*)params;

@end

//分享组件
@protocol IHN669ShareComponent

-(NSArray*)supportPlatforms;
-(void)shareTo:(NSString*)platform shareParams:(HN669ShareInfo*)params;

@end

@interface HN669Share : NSObject<IHN669Share>

/// 分享接口实现
@property (strong, nonatomic) NSObject<IHN669Share>* share;

/// 获取HN669SDKShare的单例
+(instancetype) sharedInstance;

-(void) registerShareComponent:(NSObject<IHN669ShareComponent>*)shareComponent;

-(void)share:(HN669ShareInfo*)params;
-(NSArray*)supportPlatforms;
-(void)shareTo:(NSString*)platform shareParams:(HN669ShareInfo*)params;

@end
