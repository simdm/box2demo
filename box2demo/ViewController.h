//
//  ViewController.h
//  box2demo
//
//  Created by Kyle Oba on 11/5/11.
//  Copyright (c) 2011 Pas de Chocolat, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Box2D/Box2D.h>

#define PTM_RATIO 16

@interface ViewController : UIViewController <UIAccelerometerDelegate> {
    b2World* world;
	NSTimer *tickTimer;
    
    BOOL isInitialInterfaceOrientationSet;
}

@property (nonatomic, assign) BOOL isInitialInterfaceOrientationSet;

- (void)startSimulation;

-(void)createPhysicsWorld;
-(void)addPhysicalBodyForView:(UIView *)physicalView;
-(void) tick:(NSTimer *)timer;

@end
