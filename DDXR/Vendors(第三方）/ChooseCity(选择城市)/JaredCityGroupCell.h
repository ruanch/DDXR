//
//  JaredCityGroupCell.h
//  Jared_SearchBar
//
//  Created by Jared on 16/3/3.
//  Copyright © 2016年 Jared. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "JaredCity.h"
#import "JaredChooseCityDelegate.h"


#define     MIN_SPACE           8           // 城市button最小间隙
#define     MAX_SPACE           10

#define     WIDTH_LEFT          13.5        // button左边距
#define     WIDTH_RIGHT         28          // button右边距

#define     MIN_WIDTH_BUTTON    75
#define     HEIGHT_BUTTON       38

@interface JaredCityGroupCell : UITableViewCell
@property (nonatomic,assign) id <JaredCityGroupCellDelegate> delegate;
/**
 *  标题
 */
@property (nonatomic, strong) UILabel *titleLabel;
/**
 *  暂无数据
 */
@property (nonatomic, strong) UILabel *noDataLabel;
/**
 *  btn数组
 */
@property (nonatomic, strong) NSMutableArray *arrayCityButtons;
/**
 *  城市数据信息
 */
@property (nonatomic, strong) NSArray *cityArray;
/**
 *  返回cell高度
 *
 *  @param cityArray cell的数量
 *
 *  @return 返回cell高度
 */
+ (CGFloat) getCellHeightOfCityArray:(NSArray *)cityArray;
@end
