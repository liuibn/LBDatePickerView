//
//  LBDatePickerView.h
//  易训网
//
//  Created by Dafucai on 2018/11/12.
//  Copyright © 2018年 com.populook.edu.gozhixin.mobile. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LBDatePickerView : UIView

/**
 初始化方法，只带年月的日期选择
 
 @param block 返回选中的日期
 @return QFDatePickerView对象
 */
- (instancetype)initDatePackerWithResponse:(void(^)(NSString*))block;


/**
 初始化方法，只带年份的日期选择
 
 @param block 返回选中的年份
 @return QFDatePickerView对象
 */
- (instancetype)initYearPickerViewWithResponse:(void(^)(NSString*))block;

/**
 显示方法
 */
- (void)show;

@end

NS_ASSUME_NONNULL_END
