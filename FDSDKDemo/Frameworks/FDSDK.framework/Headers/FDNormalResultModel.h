//
//  FDNormalResultModel.h
//  FDSDK
//
//  通用的结果模型
//
//  Created by huguan-mac01 on 2017/11/1.
//  Copyright © 2017年 互冠网络科技. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FDNormalResultModel : NSObject

/**
 操作是否成功(注意：默认初始化为YES)
 */
@property(nonatomic) BOOL isSuccess;

/**
 拓展结果参数
 */
@property(nonatomic, copy) NSString *extension;

@end
