//
//  F3HTileAppearanceProvider.h
//  Tlm2048
//
//  Created by zenox on 18/9/22.
//  Copyright © 2018年 zenox. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol F3HTileAppearanceProviderProtocol <NSObject>

- (UIColor *)tileColorForValue:(NSUInteger)value;
- (UIColor *)numberColorForValue:(NSUInteger)value;
- (UIFont *)fontForNumbers;

@end

@interface F3HTileAppearanceProvider : NSObject

@end
