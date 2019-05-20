//
//  F3HQueueCommand.h
//  Tlm2048
//
//  Created by zenox on 18/9/23.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PreDefine.h"

@interface SwipeCommand : NSObject

@property (nonatomic) MoveDirection direction;
@property (nonatomic, copy) void(^completion)(BOOL atLeastOneMove);

+ (instancetype)commandWithDirection:(MoveDirection)direction completionBlock:(void(^)(BOOL))completion;

@end
