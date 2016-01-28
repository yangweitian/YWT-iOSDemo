//
//  NewFeatureVC.m
//  iosDemo
//
//  Created by YangWeitian on 16/1/28.
//  Copyright © 2016年 YangWeitian. All rights reserved.
//

#import "NewFeatureVC.h"
#import "YWTVCManager.h"

@interface NewFeatureVC () <UIScrollViewDelegate>
@property (strong, nonatomic) UIScrollView *scrollView;
@end

@implementation NewFeatureVC

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _scrollView = [[UIScrollView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
    _scrollView.contentSize = CGSizeMake(SCREEN_WIDTH*3, SCREEN_HEIGHT);
    
    UIImageView *imgBS1 = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
    imgBS1.image = [UIImage imageNamed:@"yindaoye_1"];
    UIImageView *imgBS2 = [[UIImageView alloc] initWithFrame:CGRectMake(SCREEN_WIDTH, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
    imgBS2.image = [UIImage imageNamed:@"yindaoye_2"];
    UIImageView *imgBS3 = [[UIImageView alloc] initWithFrame:CGRectMake(SCREEN_WIDTH*2, 0, SCREEN_WIDTH, SCREEN_HEIGHT)];
    imgBS3.image = [UIImage imageNamed:@"yindaoye_3"];
    
    [_scrollView addSubview:imgBS1];
    [_scrollView addSubview:imgBS2];
    [_scrollView addSubview:imgBS3];
    
    _scrollView.delegate = self;
    [self.view addSubview:_scrollView];
    
    UITapGestureRecognizer *tapGesRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(startAppView:)];
    tapGesRecognizer.numberOfTouchesRequired = 1;
    tapGesRecognizer.numberOfTapsRequired = 1;
    [_scrollView addGestureRecognizer:tapGesRecognizer];
}

- (void)startAppView:(UIGestureRecognizer *)sender{
    if (SCREEN_WIDTH*2 == _scrollView.contentOffset.x) {
        [[YWTVCManager sharedManager] initRootView];
    }
}


@end
