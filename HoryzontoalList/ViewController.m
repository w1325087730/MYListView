//
//  ViewController.m
//  HoryzontoalList
//
//  Created by YaoNie on 2016/12/17.
//  Copyright © 2016年 YaoNie. All rights reserved.
//

#import "ViewController.h"
#import "UIListTableView.h"
#import "UIListViewCell.h"

@interface ViewController ()<UITableViewDelegate,UITableViewDataSource>{
    
    
    
    UIListTableView * _tableView;
    
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    /**
     这里我们需要注意的是我们列表的高度要根据方向来给。横向的时候我们的高度我们肯定希望我们的控件和我们的列表的高度差不多所以这里横向的时候我们列表的高度就是我们给cell的高度，也就是我们的
     */
 
    
    _tableView = [[UIListTableView alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width,400) style:UITableViewStylePlain];
    
    _tableView.delegate = self;
    
    
    _tableView.dataSource = self;
    
    //横向竖向
    _tableView.direction = UITableViewDirectionTypeHorizontal;
    
    
    
    [self.view addSubview:_tableView];
    
    
}



-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    
    
    
    return 5;
    
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    
    return 300;
    
    
}


-(UITableViewCell * )tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    
    static NSString * idStr = @"cell_list";
    
    
    
    UIListViewCell * cell = [tableView dequeueReusableCellWithIdentifier:idStr];
    
    
    if (cell == nil) {
        
        
        cell = [[UIListViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:idStr tableView:_tableView];
        
      
      
    }

    
    cell.showSeparate = YES;//是否需要分割线

    
    cell.separateColor = [UIColor greenColor];
    
    return cell;
    
    
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
