//
//  F3HQueueCommand.m
//  Tlm2048
//
//  Created by zenox on 18/9/23.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import "SwipeCommand.h"

@implementation SwipeCommand

+ (instancetype)commandWithDirection:(MoveDirection)direction
                     completionBlock:(void (^)(BOOL))completion
{
    SwipeCommand *command = [[self class] new];
    command.direction = direction;
    command.completion = completion;
    return command;
}

@end
