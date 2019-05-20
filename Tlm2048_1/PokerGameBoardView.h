//
//  F3HPokerGameBoardView.h
//  Tlm2048
//
//  Created by zenox on 18/9/26.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PokerGameBoardView : UIView

+ (instancetype)gameboardWithDimension:(NSUInteger)dimension
                             cellWidth:(CGFloat)width
                            cellHeight:(CGFloat)height
                           cellPadding:(CGFloat)padding
                          cornerRadius:(CGFloat)cornerRadius
                       backgroundColor:(UIColor *)backgroundColor
                       foregroundColor:(UIColor *)foregroundColor;

- (void)reset;

- (void)insertPokerAtIndexPath:(NSIndexPath *)path
                         color:(NSInteger)color
                        number:(NSInteger)number
                    completion:(void(^)(void))completion;

- (void)insertPokerAtIndexPath:(NSIndexPath *)path
                         color:(NSInteger)color
                        number:(NSInteger)number
                         delay:(CGFloat)delay
                    completion:(void(^)(void))completion;

- (void)movePokerFromIndexPath:(NSIndexPath *)fromPath
                   toIndexPath:(NSIndexPath *)toPath;

- (void)movePokerFromIndexPath:(NSIndexPath *)fromPath
                   toIndexPath:(NSIndexPath *)toPath
                         delay:(CGFloat)delay;

- (void)erasePokers:(NSMutableArray *)pathArray;

@property (strong, nonatomic) NSString *cardBackImageStr;
@property (nonatomic) CGRect trashFrame;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic, strong) NSMutableDictionary *boardPokers;

@end
