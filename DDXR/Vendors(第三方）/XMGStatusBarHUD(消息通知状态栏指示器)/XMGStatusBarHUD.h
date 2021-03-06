//
//  XMGStatusBarHUD.h
//  XMGStatusBarHUD
//
//  Created by xiaomage on 15/9/21.
//  Copyright (c) 2015年 xiaomage. All rights reserved.
//

/*
 ==========================Example=============================
 - (IBAction)success {
 [XMGStatusBarHUD showSuccess:@"加载数据成功！"];
 }
 
 - (IBAction)error {
 [XMGStatusBarHUD showError:@"登录失败！"];
 }
 
 - (IBAction)loading {
 [XMGStatusBarHUD showLoading:@"正在登录中..."];
 }
 
 - (IBAction)hide {
 [XMGStatusBarHUD hide];
 }
 
 - (IBAction)normal {
 [XMGStatusBarHUD showText:@"随便显示的文字！！！！"];
*/

#import <UIKit/UIKit.h>

@interface XMGStatusBarHUD : NSObject

/**
 * 显示图片+文字信息
 */
+ (void)showImageName:(NSString *)imageName text:(NSString *)text;

/**
 * 显示图片+文字信息
 */
+ (void)showImage:(UIImage *)image text:(NSString *)text;

/**
 * 显示成功信息
 */
+ (void)showSuccess:(NSString *)text;

/**
 * 显示失败信息
 */
+ (void)showError:(NSString *)text;

/**
 * 显示正在处理的信息
 */
+ (void)showLoading:(NSString *)text;

/**
 * 显示普通信息
 */
+ (void)showText:(NSString *)text;

/**
 * 隐藏
 */
+ (void)hide;
@end
