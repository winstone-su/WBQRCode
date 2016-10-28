//
//  QRcodeOverlayView.h
//  WBQRCode
//
//  Created by swb on 2016/10/28.
//  Copyright © 2016年 WB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QRcodeOverlayView : UIView

/**
 *  透明扫描框的区域
 */
@property (nonatomic, assign) CGRect transparentArea;
@property (nonatomic, weak) UILabel *resultLabel;
//@property (nonatomic, weak) UIImageView *imgLine; //闪动的线
-(void)startAnimation;
-(void)stopAnimation;

@end
