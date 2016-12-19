//
//  UIListTableView.h
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


typedef enum {
    
    UITableViewDirectionTypeHorizontal=0,
    
    UITableViewDirectionTypeVertical
   
    
}UITableViewDirectionType;





@interface UIListTableView : UITableView


/**
 列表的方向
 */
@property(nonatomic,assign)UITableViewDirectionType direction;





@end
