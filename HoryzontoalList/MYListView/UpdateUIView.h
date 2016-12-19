//
//  UpdateUIView.h
//  HoryzontoalList
//
//  Created by YaoNie on 2016/12/17.
//  Copyright © 2016年 YaoNie. All rights reserved.
//

#import <UIKit/UIKit.h>
//注：
/**
 
 需要创建自己需要的控件请移步到UpdateUIView.m文件里面去创建就好了。此实例只作为参考！各位如若觉得有什么不好的地方或者要改进的地方请反馈给我1474961002@qq.com
 
 
 */

/**
 我们需要在列表上创建的各种控件都拿到这里来创建就好了。。
 
 */


@interface UpdateUIView : UIView



/**
 刷新坐标此方法也不用你去干什么，。你只要在方法里面给你的控件赋值就好了

 @param frame <#frame description#>
 */
-(void)updateFrame:(CGRect)frame;



@end
