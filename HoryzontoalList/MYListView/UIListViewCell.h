//
//  UIListViewCell.h
//  HoryzontoalList
//
//  Created by YaoNie on 2016/12/17.
//  Copyright © 2016年 YaoNie. All rights reserved.
//

//注：
/**
 
 需要创建自己需要的控件请移步到UpdateUIView.m文件里面去创建就好了。此实例只作为参考！各位如若觉得有什么不好的地方或者要改进的地方请反馈给我1474961002@qq.com
 
 
 */


#import <UIKit/UIKit.h>
#import "UIListTableView.h"
#import "UpdateUIView.h"



typedef enum {
    
    UITableViewContentDirectionTypeHorizontal=0,//横向
    
    UITableViewContentDirectionTypeVertical//纵向
    
}UITableViewContentDirectionType;


typedef enum {
    
    CellBackTypeNone = 0,//不需要选中状态
    
    CellBackTypeDefult,//灰白底
    
    CellBackTypeBlue,//纯蓝色
    
    CellBackTypeGray//纯灰色
    
    
}CellBackType;

@interface UIListViewCell : UITableViewCell

/**
 方向支持横向和纵向0为横1为纵这个使用的时候就没必要调用了。这个只是我自己用来调用的
 */
@property(nonatomic,assign)UITableViewContentDirectionType direction;



/**
 是否需要分割线
 */
@property(nonatomic,assign)BOOL showSeparate;

/**
 设置分割线的颜色
 */
@property(nonatomic,retain)UIColor * separateColor;


/**
 设置选中cell的灰色背景
 */
@property(nonatomic,assign)CellBackType  cellSelectionBackType;



/**
 cell的初始化方法初始化时需要带入一个特俗的参数tableView

 @param style cell的加载方式
 @param reuseIdentifier 特俗标识符
 @param tableVIew 就是你创建的那个tableView
 @return 返回你初始化好了的cell
 */
-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier tableView:(UIListTableView * )tableVIew;


@end
