//
//  HelpCharacterView.h
//  Tlm2048_1
//
//  Created by zenox on 18/12/4.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelpCharacterView : UIView

@property (nonatomic, strong) NSString *content;
@property (nonatomic) UIColor *textColor;

- (instancetype)initWithFrame:(CGRect)frame;

@end
