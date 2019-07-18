//
//  SketchView.h
//  Sketch
//
//  Created by Keshav on 06/04/17.
//  Copyright © 2017 Particle41. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Tools/Paint.h"
#import "Tools/SketchTool.h"

@interface SketchView : UIView

-(void) clear;
-(void)setToolType:(SketchToolType) toolType;
-(void)setViewImage:(UIImage *)image;

@end
