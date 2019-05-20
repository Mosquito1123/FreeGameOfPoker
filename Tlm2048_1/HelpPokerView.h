//
//  HelpPokerView.h
//  Tlm2048_1
//
//  Created by zenox on 18/12/3.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelpPokerView : UIButton

@property (nonatomic) NSInteger rank;
@property (nonatomic, strong) NSString *suit;

- (instancetype)initWithFrame:(CGRect)frame;

@end
