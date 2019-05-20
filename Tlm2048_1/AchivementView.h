//
//  AchivementView.h
//  Tlm2048_1
//
//  Created by zenox on 18/12/27.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface AchivementView : UIView

@property (nonatomic, strong) NSString *cardBackImageStr;
@property (nonatomic, strong) NSString *achivementDiscription;

+ (instancetype)achivementWithPosition:(CGPoint)position
                             sideWidth:(CGFloat)sideWidth
                            sideHeight:(CGFloat)sideHeight
                          cardBackImageStr:(NSString *)cardBackImageStr
                     achivementDiscription:(NSString *)achivementDescription;

@end
