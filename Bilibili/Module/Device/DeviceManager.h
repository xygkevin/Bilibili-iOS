//
//  DeviceManager.h
//  Bilibili
//
//  Created by LunarEclipse on 16/7/4.
//  Copyright © 2016年 LunarEclipse. All rights reserved.
//

@import UIKit;

@interface DeviceManager : NSObject

@property (nonatomic, weak, readonly) UIViewController * rootViewController;

@property (nonatomic, assign) UIInterfaceOrientationMask orientation;
@property (nonatomic, assign, readonly) UIInterfaceOrientationMask defaultOrientation;

- (instancetype)init NS_UNAVAILABLE;

+(DeviceManager *)instance;

@end
