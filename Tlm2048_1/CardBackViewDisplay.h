//
//  CardBackViewDisplay.h
//  Tlm2048_1
//
//  Created by zenox on 16/2/21.
//  Copyright © 2016年 zenox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CardBackViewDisplay : UIView

@property (nonatomic, strong) NSString *imageNameStr;

+ (instancetype)cardBackPosition:(CGPoint)position
                       sideWidth:(CGFloat)sideWidth
                      sideHeight:(CGFloat)sideHeight
                    cornerRadius:(CGFloat)cornerRadius;

@end
