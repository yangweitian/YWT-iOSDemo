//
//  AppMacro.h
//  MobileApplicationPlatform
//
//  Created by zhdooo on 15/4/15.
//  Copyright (c) 2015年 gs. All rights reserved.
//

#ifndef MobileApplicationPlatform_AppMacro_h
#define MobileApplicationPlatform_AppMacro_h

/// common macro func
#define RCSDefaultNotificationCenter [NSNotificationCenter defaultCenter]

#define IS_IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue]>=7.0?YES:NO)
#define IS_IOS8 ([[[UIDevice currentDevice] systemVersion] floatValue]>=8.0?YES:NO)
#define IS_IOS9 ([[[UIDevice currentDevice] systemVersion] floatValue]>=9.0?YES:NO)

#define SCREEN_SIZE [UIScreen mainScreen].bounds.size
#define XiaoXi_AppKey @"003300ac"
#define ThirdNode_AppKey @"222222cc" //release appkey, debug is @"111111cc". but Android both use @"111111cc".
//#define ThirdNode_AppKey @"111111cc"
#define Umeng_Appkey @"56186f3567e58e650a004548"
#define Flurry_Appkey @"YB32XK8BJBBCP9VHNJRX"


//SSO platform
//sourcid: 010106 same as Android
#define SSO_APPKEY  @"46D8B1FB0A7EF2C3"
#define SSO_APPID   @"01010618"


#ifdef DEBUG
//#define Server_BaseURL @"http://183.131.13.86:9080"   //product server url
#define Server_BaseURL @"http://183.131.13.86:8080"   //test server url
#define Analysis_Key @"43200ad8f2284f869db47ab741c81bdf"
#define XiaoPush_Cert_File @"develop"
#define MAMapServices_ApiKey @"a989b813f4dfcbe2aa4e4305ce2a60cf"

#else
//#define Server_BaseURL @"http://183.131.13.86:9080"   //product server url
#define Server_BaseURL @"http://183.131.13.86:8080"   //test server url
#define Analysis_Key @"d0833d2b161246799c66c524a89d78b4"
#define XiaoPush_Cert_File @"product"
#define MAMapServices_ApiKey @"6823fabb9770b182f268bf4b227939b2"

#endif


#define DDLogInfo NSLog
#define DDLogError NSLog

#ifdef DEBUG
//static const int ddLogLevel = DDLogLevelVerbose;
#else
//static const int ddLogLevel = DDLogLevelError;
#endif

//#ifdef DEBUG
//static const int ddLogLevel = LOG_LEVEL_VERBOSE;
//#else
//static const int ddLogLevel = LOG_LEVEL_ERROR;
//#endif


#define Timeout_uploadImage     (dispatch_time(DISPATCH_TIME_NOW,(NSEC_PER_SEC*45)))
#define Timeout_commonRestService     (dispatch_time(DISPATCH_TIME_NOW,(NSEC_PER_SEC*30)))

#endif


//定时发送相关的key，设置NSUserDefaults
#define TIMING_MESSAGE_LAUNCH @"Timing_Message_Launch"  //启动时设置
#define TIMING_MESSAGE_ACTIVE @"Timing_Message_Active"  //从后台激活时设置

#define APP_ACTIVE_STATUS         @"APP_ACTIVE_STATUS"          //程序激活状态
#define APP_POSITIVE       @"APP_POSITIVE"        //程序已激活
#define APP_NEGATIVE       @"APP_NEGATIVE"        //程序未激活


/// CODE REUSE: Macro for pushing the VC into the navigation stack
#define PushVCandHideBar(NamedVC) do{ \
NamedVC *theVC = [[NamedVC alloc] init]; \
theVC.hidesBottomBarWhenPushed = YES; \
[self.navigationController pushViewController:theVC animated:YES]; \
} while (0)

#define PushVC(NamedVC) do{ \
NamedVC *theVC = [[NamedVC alloc] init]; \
[self.navigationController pushViewController:theVC animated:YES]; \
} while (0)


/// util
//提示信息显示时间
#define RCSHUD_DURATION 1.4f

//默认倒计时时间
#define DEFAULT_COUNTDOWN_TIME 60
#define DEFAULT_TIMER_DELAY 1.7f
#define DEFAULT_ANIMATE_TIME 0.3f

// 手机号长度
#define PHONE_LENGTH 11
