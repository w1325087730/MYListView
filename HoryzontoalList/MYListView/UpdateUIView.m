//
//  UpdateUIView.m
//  HoryzontoalList
//
//  Created by YaoNie on 2016/12/17.
//  Copyright © 2016年 YaoNie. All rights reserved.
////注：
/**
 
 需要创建自己需要的控件请移步到UpdateUIView.m文件里面去创建就好了。此实例只作为参考！各位如若觉得有什么不好的地方或者要改进的地方请反馈给我1474961002@qq.com
 
 
 */

//注：
/**
 
 需要创建自己需要的控件请移步到UpdateUIView.m文件里面去创建就好了。
 
 
 */


#import "UpdateUIView.h"

@implementation UpdateUIView{
    
    
    UILabel * label;
    
}



/**
 在这个方法里面创建各种需要的控件

 @return <#return value description#>
 */
-(instancetype)init{
    
    self = [super init];
    
    if (self) {
        
        self.backgroundColor = [UIColor redColor];
        label = [[UILabel alloc] init];
        
        label.backgroundColor = [UIColor blueColor];
        
        [self addSubview:label];
    }
    
    return self;
    
    
}


-(void)updateFrame:(CGRect)frame{

    
    
    label.frame = CGRectMake(0, 0, 200, 20);
    
 
    
}


@end
