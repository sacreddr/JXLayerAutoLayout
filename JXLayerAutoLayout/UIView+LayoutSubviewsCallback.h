//
//  UIView+LayoutSubviewsCallback.h
//  JXLayerAutoLayout
//
//  Created by jiaxin on 2018/5/4.
//  Copyright © 2018年 jiaxin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (LayoutSubviewsCallback)

@property (nonatomic, copy) void(^layoutSubviewsCallback)(UIView *view);

@end