//
//  SLog.h
//
//  Created by dev on 2017/8/15.
//  Copyright © 2017年 . All rights reserved.
//

#ifndef SLog_h
#define SLog_h

#import "SDataCenter.h"

#define SDLog(format, ...) if([SDataCenter getInstance].debugEnabled) NSLog(@"%@:%@", [[SDataCenter getInstance] getConfig].sdkTag, [NSString stringWithFormat:format, ## __VA_ARGS__]);
#define SELog(format, ...) NSLog(@"%@:%@", [[SDataCenter getInstance] getConfig].sdkTag, [NSString stringWithFormat:format, ## __VA_ARGS__]);
#define SILog(format, ...) NSLog(@"%@:%@", [[SDataCenter getInstance] getConfig].sdkTag, [NSString stringWithFormat:format, ## __VA_ARGS__]);

#endif /* SLog_h */
