//
//  BaseManage.h
//  JjyxSdk
//
//  Created by Mac on 2017/4/26.
//  Copyright © 2017年 wanqi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "TracelessUserInitHelp.h"

#define SDK_VER @"3.1.0"  //SDK 内部版本号
#define SDK_VER_S @"v3.1.0"  //SDK 内部版本号

@interface TracelessBaseManage : NSObject
/**
 所有控制器的集合，也是view的集合
 */
@property (nonatomic,strong)NSMutableArray *allviews;

@property (nonatomic,strong)NSBundle *resourceBundle;
@property (nonatomic,strong)UIView *baview;
@property (nonatomic,strong)TracelessUserInitHelp *jjyInitHelp;

@property (nonatomic,weak)UIWindow *Keywindow;


/**
 显示当前传进去的view
 */
-(void)pushController:(UIViewController *)con isAnim:(BOOL) isAnim;

/**
 返回上一个view
 */
-(void)popController:(BOOL) isAnim;


/**
 返回指定个数
 */
-(void)popControllerWithCount:(int)count;
/**
 退出全部
 */
-(void)popAllController;

-(void)resetPassPopController:(NSString *)mbi pass:(NSString *)pass;

/**
 添加居中约束约束
 */
-(void)addCenterConstraints:(UIWindow *)window chilview:(UIView *)chilview;

/**
 添加等于父控件大小约束约束
 */
-(void)addMaParentConstraints:(UIWindow *)window chilview:(UIView *)chilview;

-(void)showLoginSucceedHint;

@end
