//
//  qdSdkFw.h
//  qdSdkFw
//
//  Created by chaos on 15-8-30.
//  Copyright (c) 2015年 chaos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "Qxdelegate.h"



#define QX_AC (@"AC") 
#define QX_SEVERNAME (@"SEVER_NAME")
#define QX_SERVERID (@"SEVER_ID")
#define QX_ROLEID (@"ROLE_ID")
#define QX_ROLENAME (@"ROLE_NAME")
#define QX_LEVEL (@"LEVEL")
#define QX_COUNT (@"COUNT")


@protocol QXDelegate;

@interface qdSdkLib : NSObject
{
    UIViewController*vc;
}

//-(void) log:(NSString *)msg;//test

@property(nonatomic,assign) id<QXDelegate> Delegate;

+(qdSdkLib *)Instance;



- (void) Login;



-(void)doRoleStatics:(NSDictionary*)dic;

-(void)init:(NSString*)appid GAME_KEY:(NSString*)gameid CHANNELID:(NSString*)channelid
TICKET:(NSString*)tic GAME:(NSString*)Gname LOGINKEY:(NSString*) logkey;




-(void)StartAnimating;
-(void)StopAnimating;

-(void)initWithappKey:(NSString *)appKey withChannelId:(NSString *)channelId;


-(void)setRegisterWithAccountID:(NSString *)account;


-(void)setLoginWithAccountID:(NSString *)account;


-(void)setPaymentStart:(NSString *)transactionId paymentType:(NSString*)paymentType currentType:(NSString*)currencyType currencyAmount:(float)currencyAmount;

-(void)setPayment:(NSString *)transactionId paymentType:(NSString*)paymentType currentType:(NSString*)currencyType currencyAmount:(float)currencyAmount;

-(void)SetEvent:(NSString*)eventname;

-(NSString*)getDeviceId;

-(void)setPrintLog:(BOOL)print;

-(void)SetViewcontrol:(UIViewController*)viewc;

-(void)OpenPay:(int)money TITLE:(NSString*)title Item_desc:(NSString*)item_desc Ext:(NSString*)ext RoleName:(NSString*)rolename productId:(NSString*)productId  quantity:(int)quantity;

-(void) notifyLoginresult:(NSDictionary *)result;

-(void) notifyPayresult:(NSDictionary *)result;

-(void) notifyRegisterresult:(NSDictionary *)result;

@end
