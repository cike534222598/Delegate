//
//  SettingViewController.h
//  Delegate
//
//  Created by Jame on 15/5/25.
//  Copyright (c) 2015年 SSIC. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol settingDelegate <NSObject>

@optional

- (void)settingUserName:(NSString *)userName;

@end

@interface SettingViewController : UIViewController

@property (nonatomic,unsafe_unretained) id <settingDelegate> delegate;

@end
