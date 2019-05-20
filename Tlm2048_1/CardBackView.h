//
//  CardBackView.h
//  Tlm2048_1
//
//  Created by zenox on 18/12/13.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CardBackView : UIView

@property (nonatomic, strong) NSString *imageNameStr;

+ (instancetype)cardBackPosition:(CGPoint)position
                       sideWidth:(CGFloat)sideWidth
                      sideHeight:(CGFloat)sideHeight
                    cornerRadius:(CGFloat)cornerRadius;

@end
