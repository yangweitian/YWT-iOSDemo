//
//  YWTVCManager.m
//  iosDemo
//
//  Created by YangWeitian on 16/1/28.
//  Copyright © 2016年 YangWeitian. All rights reserved.
//

#import "YWTVCManager.h"
#import "NewFeatureVC.h"

#define KEY_APP_ISFIRST @"KEY_APP_ISFIRST"

@implementation YWTVCManager

+ (id)sharedManager{
    static dispatch_once_t once;
    static id instance;
    dispatch_once(&once, ^{instance = self.new;});
    return instance;
}

- (void)initRootView{
//    if ([[NSUserDefaults standardUserDefaults] objectForKey:KEY_APP_ISFIRST]) {
//        [self initTabVC];
//    }else{
//        [self initIntroView];
//        [[NSUserDefaults standardUserDefaults] setObject:@(YES) forKey:KEY_APP_ISFIRST];
//        [[NSUserDefaults standardUserDefaults] synchronize];
//    }
    
    [self initTabVC];
}

- (void)initIntroView{
    NewFeatureVC *newFeatureVC = [[NewFeatureVC alloc] init];
    
    self.window.rootViewController = newFeatureVC;
    [self.window makeKeyAndVisible];
}

- (void)initTabVC{
    
    UIViewController *vc = [[UIViewController alloc] init];
    [self.window setRootViewController:vc];
    [self.window makeKeyAndVisible];
}

@end
