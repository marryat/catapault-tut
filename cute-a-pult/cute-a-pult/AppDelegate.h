//
//  AppDelegate.h
//  cute-a-pult
//
//  Created by Marryat Stevens on 05/05/2012.
//  Copyright Procorva 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
