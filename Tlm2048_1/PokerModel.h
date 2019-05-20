//
//  F3HPokerModel.h
//  Tlm2048
//
//  Created by zenox on 18/9/25.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PreDefine.h"

/*
typedef struct
{
    F3HPokerColor pokerColor;
    F3HPokerNumber pokerNumber;
}F3HPokerValue;
 */

@interface PokerModel : NSObject

@property (nonatomic) BOOL isErased;
@property (nonatomic) BOOL empty;
@property (nonatomic) PokerColor pokerColor;
@property (nonatomic) PokerNumber pokerNumber;
+ (instancetype)emptyPoker;

// 深拷贝
+ (id)copyWithPoker:(PokerModel *)poker;

@end
