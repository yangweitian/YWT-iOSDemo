//
//  YWTVCManager.h
//  iosDemo
//
//  Created by YangWeitian on 16/1/28.
//  Copyright © 2016年 YangWeitian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YWTVCManager : NSObject

@property (strong, nonatomic) UIWindow *window; // 主窗口

+ (YWTVCManager *)sharedManager;
- (void)initRootView;

@end
