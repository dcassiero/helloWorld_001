//
//  helloWorld_001AppDelegate.h
//  helloWorld_001
//
//  Created by Daniel Cassiero on 5/5/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class helloWorld_001ViewController;

@interface helloWorld_001AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet helloWorld_001ViewController *viewController;

@end
