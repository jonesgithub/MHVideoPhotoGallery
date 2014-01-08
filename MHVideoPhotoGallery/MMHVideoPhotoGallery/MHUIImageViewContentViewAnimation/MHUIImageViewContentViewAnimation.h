//
//  MHUIImageViewContentViewAnimation.h
//  MHVideoPhotoGallery
//
//  Created by Mario Hahn on 30.12.13.
//  Copyright (c) 2013 Mario Hahn. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MHVideoImageGalleryGlobal.h"

@interface MHUIImageViewContentViewAnimation : UIImageView

@property (nonatomic) MHGalleryTheme theme;

-(void)animateToViewMode:(UIViewContentMode)contenMode
                forFrame:(CGRect)frame
            withDuration:(float)duration
              afterDelay:(float)delay
                finished:(void (^)(BOOL finished))finishedBlock;
@end