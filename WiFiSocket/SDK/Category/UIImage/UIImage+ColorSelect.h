//
//  UIImage+ColorSelect.h
//  DMSelectColorDemo
//
//  Created by gamin on 16/1/18.
//  Copyright © 2016年 Gamin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ColorSelect)
- (NSArray *)colorAtPixel:(CGPoint)point;

- (UIImage *)imageWithColor:(UIColor *)color;

+ (UIImage*) imageToTransparent:(UIImage*) image;

@end