//
//  ViewController.m
//  1231231231231231
//
//  Created by zhou on 2023/12/5.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    UIView *parentView = [[UIView alloc] initWithFrame:CGRectMake(100, 100, 200, 200)];
    parentView.backgroundColor = [UIColor orangeColor];
//    parentView.clipsToBounds = NO; // 允许子视图超出父视图范围
    
    UIView *parentView1 = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 200, 200)];
    parentView1.backgroundColor = [UIColor lightGrayColor];
//    parentView1.clipsToBounds = NO; // 允许子视图超出父视图范围
    
    UIView *childView = [[UIView alloc] initWithFrame:CGRectMake(150,210, 100, 100)];
    childView.backgroundColor = [UIColor redColor];
    
    [self.view addSubview:parentView];
    [parentView addSubview:parentView1];
    [parentView1 addSubview:childView];
    
    
    
}


@end
