//
//  AppDelegate.h
//  box2demo
//
//  Created by Kyle Oba on 11/5/11.
//  Copyright (c) 2011 Pas de Chocolat, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    
}

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

- (void)startSimulation;

@end
