//
//  LaneDetectorBridge.h
//  SimpleLaneDetection
//
//  Created by Anurag Ajwani on 28/04/2019.
//  Copyright © 2019 Anurag Ajwani. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface LaneDetectorBridge : NSObject
    
- (UIImage *) detectLaneIn: (UIImage *) image;
    
@end
