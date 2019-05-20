//
//  F3HPokerGameModel.h
//  Tlm2048
//
//  Created by zenox on 18/9/25.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PokerModel.h"
#import "PreDefine.h"

@protocol PokerGameDelegate <NSObject>

- (void)scoreChanged:(NSInteger)newScore;

- (void)leftCardsChanged:(NSInteger)newCardsNum;

- (void)movePokerFromIndexPath:(NSIndexPath *)fromPath
                   toIndexPath:(NSIndexPath *)toPath;

- (void)movePokerFromIndexPath:(NSIndexPath *)fromPath
                   toIndexPath:(NSIndexPath *)toPath
                         delay:(CGFloat)delay;

- (void)erasePokers:(NSMutableArray *)pathArray;


- (void)insertPokerAtIndexPath:(NSIndexPath *)path
                         color:(NSInteger)color
                        number:(NSInteger)number
                    completion:(void(^)(void))completion;

- (void)insertPokerAtIndexPath:(NSIndexPath *)path
                         color:(NSInteger)color
                        number:(NSInteger)number
                         delay:(CGFloat)delay
                    completion:(void(^)(void))completion;

@end

@interface PokerGameManager : NSObject

@property (nonatomic) NSInteger score;

@property (nonatomic, strong) NSMutableArray *library;

+ (PokerGameManager *)sharedManager;

- (instancetype)initWithDimension:(NSUInteger)dimension
                         winValue:(NSUInteger)value
                         delegate:(id <PokerGameDelegate>)delegate;


- (void)reset;

- (void)insertAtRandomLocationPokerWithColor:(PokerColor)color
                                      number:(PokerNumber)number
                                  completion:(void(^)(void))completion;


- (void)insertPokerWithColor:(PokerColor)color
                      number:(PokerNumber)number
                atIndexPath:(NSIndexPath *)path
                  completion:(void(^)(void))completion;


- (void)performMoveInDirection:(MoveDirection)direction
               completionBlock:(void(^)(BOOL))completion;

- (NSArray *)mergeGroup:(NSArray *)group;

- (BOOL)userHasLost;
- (BOOL)userHasWon;


@end
