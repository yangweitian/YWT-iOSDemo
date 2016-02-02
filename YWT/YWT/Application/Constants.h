//
//  Constants.h
//  YWT
//
//  Created by YangWeitian on 16/1/29.
//  Copyright © 2016年 YangWeitian. All rights reserved.
//

#ifndef Constants_h
#define Constants_h

// app info


// color
#pragma mark - Color
// font
#define NEWUI_Color_fontcor1     ([UIColor colorWithString:@"333333"])
#define NEWUI_Color_fontcor2     ([UIColor colorWithString:@"666666"])
#define NEWUI_Color_fontcor3     ([UIColor colorWithString:@"999999"])
#define NEWUI_Color_fontcor4     ([UIColor colorWithString:@"cccccc"])
// bg
#define NEWUI_Color_bgcor1       ([UIColor colorWithString:@"f5f5f5"])
#define NEWUI_Color_bgcor2       ([UIColor colorWithString:@"b2b2b2"])
#define NEWUI_Color_bgcor3       ([UIColor colorWithString:@"f0f0f0"])

#define NEWUI_Color_bgcor2     ([UIColor colorWithString:@"b2b2b2"])
#define NEWUI_Color_bgcor3     ([UIColor colorWithString:@"f0f0f0"])

// separator
#define NEWUI_Color_linecor1     ([UIColor colorWithString:@"dcdcdc"])
#define NEWUI_Color_linecor2     ([UIColor colorWithString:@"d9d9d9"])
#define NEWUI_Color_linecor3     ([UIColor colorWithString:@"a99ab2"])


// other color
#define NEWUI_Color_purcor1      ([UIColor colorWithString:@"5a5060"])
#define NEWUI_Color_purcor2      ([UIColor colorWithString:@"776c7e"])
#define NEWUI_Color_purcor3      ([UIColor colorWithString:@"a33aac"])
#define NEWUI_Color_purcor4      ([UIColor colorWithString:@"c1afcc"])

#define NEWUI_Color_yelcor1      ([UIColor colorWithString:@"f7de36"])
#define NEWUI_Color_yelcor2      ([UIColor colorWithString:@"f3cf20"])

#define NEWUI_Color_whitcor1     ([UIColor colorWithString:@"ffffff"])

#define NEWUI_Color_redcor1      ([UIColor colorWithString:@"ff0f0f"])
#define NEWUI_Color_redcor2      ([UIColor colorWithString:@"f21818"])

#define NEWUI_Color_redcor2     ([UIColor colorWithString:@"f21818"])
#define NEWUI_Color_bluecor1     ([UIColor colorWithString:@"00a8ff"])


#define NEWUI_Color_Alpha_whitcor1(alphaVal) ([UIColor colorWithHexValue:0xffffff alpha:alphaVal*255.0f])



#pragma mark - Dimensions
// 单元格高度
#define DEFAULT_CELL_HEIGHT 44.0f
// 导航栏尺寸
#define NAV_BAR_HEIGHT   44.0f
// TabBar尺寸
#define TAB_BAR_HEIGHT 49.0f
// 分割线
#define DEFAULT_SEPARATOR_WIDTH 1.0f
//默认边缘距离
#define DEFAULT_HORI_MARGIN 15.0f
// 屏幕可用区域高度(减去状态栏和导航栏高度)
#define CONTENT_AREA_HEIGHT (SCREEN_HEIGHT-STATUS_BAR_HEIGHT-NAV_BAR_HEIGHT)


/**********************************OLD UI*************************************/
#pragma mark - OLD UI
#define YWT_Color_Background    ([UIColor colorWithString:@"ffffff"])

#define YWT_Color_TitleNormal   ([UIColor colorWithString:@"a5a5a5"])
#define YWT_Color_TitleSel      ([UIColor colorWithString:@"2ebfd3"])

#define YWT_Color_White         ([UIColor colorWithString:@"ffffff"])
#define YWT_Color_CommonBlack   ([UIColor colorWithString:@"555555"])
#define YWT_Color_Gray          ([UIColor colorWithString:@"bbbbbb"])
#define YWT_Color_Blue          ([UIColor colorWithString:@"0000ff"])
#define YWT_Color_DarkGray      ([UIColor colorWithString:@"333333"])
#define YWT_Color_MiddleGray      ([UIColor colorWithString:@"666666"])
#define YWT_Color_LightGray     ([UIColor colorWithString:@"d0d0d0"])
#define YWT_Color_BorderGray     ([UIColor colorWithString:@"c7c7c7"])
#define YWT_Color_BorderYellow   ([UIColor colorWithString:@"f7bb48"])
#define YWT_Color_HintGray      ([UIColor colorWithString:@"dddddd"])
#define YWT_Color_TimingBlue    ([UIColor colorWithString:@"499dfb"])
#define YWT_Color_InputViewGray ([UIColor colorWithString:@"f9f9f9"])

#define YWT_Color_TopDark       ([UIColor colorWithString:@"#3a465a"])
#define YWT_Color_NavBarColor   NEWUI_Color_yelcor1
//([UIColor colorWithString:@"38475b"])
#define YWT_Color_HighlightedBlue ([UIColor colorWithString:@"499dfb"])
#define YWT_Color_DisabledGray ([UIColor colorWithString:@"dcdcdc"])
#define YWT_Search_HighlightColor ([UIColor colorWithString:@"499dfb"])
#define YWT_Color_TopBackground      ([UIColor colorWithString:@"f2f4f7"])

#define YWT_Color_NetReminderYellow ([UIColor colorWithString:@"faeb6d"])

#define YWT_Color_HeadGreen     ([UIColor colorWithString:@"91ba39"])
#define YWT_Color_HeadBlue      ([UIColor colorWithString:@"4bbde7"])
#define YWT_Color_Headyellow    ([UIColor colorWithString:@"ebca59"])
#define YWT_Color_HeadRed       ([UIColor colorWithString:@"f88567"])
#define YWT_Color_SearchBG      ([UIColor colorWithString:@"dfdfdf"])
#define YWT_Color_SearchTin     ([UIColor colorWithString:@"000000"])
#define YWT_Color_SearchCancel  ([UIColor colorWithString:@"666666"])
#define YWT_Color_Cell_Line     ([UIColor colorWithString:@"dcdcdc"])

#define YWT_Color_BadgeRed      ([UIColor colorWithString:@"ff3c30"])
#define YWT_Color_BurnRed      ([UIColor colorWithString:@"fa5555"])
#define YWT_Color_CursorBlue    ([UIColor colorWithString:@"0066ff"])

//call
#define YWT_Color_CallGary ([UIColor colorWithString:@"f8f8f8"]);

// border
#define YWT_Color_Border  ([UIColor colorWithString:@"dbd6d6"])

// transparent white color
#define YWT_Color_Alpha_White(alphaVal) ([UIColor colorWithHexValue:0xffffff alpha:alphaVal*255.0f])


// color macro func
#define ColorWithRGB(_R_, _G_, _B_)        [UIColor colorWithRed:_R_/255.0  \
green:_G_/255.0 \
blue:_B_/255.0 \
alpha:1.0]
#define ColorWithRGBA(_R_, _G_, _B_, _A_)   [UIColor colorWithRed:_R_/255.0  \
green:_G_/255.0 \
blue:_B_/255.0 \
alpha:_A_]
#define PureColor(_a_)        [UIColor colorWithRed:_a_/255.0  \
green:_a_/255.0 \
blue:_a_/255.0 \
alpha:1.0]

#define PureAlphaColor(_a_, _alpha_)        [UIColor colorWithRed:_a_/255.0  \
green:_a_/255.0 \
blue:_a_/255.0 \
alpha:_alpha_]


/// text colors
#define YWT_Color_SubTitle  ([UIColor colorWithString:@"999999"])
#define YWT_Color_MainContent   ([UIColor colorWithString:@"333333"])
#define YWT_Color_AssistContent   ([UIColor colorWithString:@"aaaaaa"])


#pragma mark - font section
#define YWT_Font_Arial_size_30  ([UIFont fontWithName:@"Arial" size:30])
#define YWT_Font_Arial_size_22  ([UIFont fontWithName:@"Arial" size:22])
#define YWT_Font_Arial_size_20  ([UIFont fontWithName:@"Arial" size:20])
#define YWT_Font_Arial_size_19  ([UIFont fontWithName:@"Arial" size:19])
#define YWT_Font_Arial_size_18  ([UIFont fontWithName:@"Arial" size:18])
#define YWT_Font_Arial_size_17  ([UIFont fontWithName:@"Arial" size:17])
#define YWT_Font_Arial_size_16  ([UIFont fontWithName:@"Arial" size:16])
#define YWT_Font_Arial_size_15  ([UIFont fontWithName:@"Arial" size:15])
#define YWT_Font_Arial_size_14  ([UIFont fontWithName:@"Arial" size:14])
#define YWT_Font_Arial_size_13  ([UIFont fontWithName:@"Arial" size:13])
#define YWT_Font_Arial_size_12  ([UIFont fontWithName:@"Arial" size:12])
#define YWT_Font_Arial_size_11  ([UIFont fontWithName:@"Arial" size:11])
#define YWT_Font_Arial_size_9  ([UIFont fontWithName:@"Arial" size:9])



#define Alert_Font_Title        ([UIFont boldSystemFontOfSize:17.f])
#define Alert_Font_Msg          ([UIFont fontWithName:@"Arial" size:16])
#define Alert_Font_Button       ([UIFont boldSystemFontOfSize:17.f])

// font size


// UserDefaults


// notification key



#endif /* Constants_h */
