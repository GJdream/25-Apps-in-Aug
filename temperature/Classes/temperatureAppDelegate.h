//
//  temperatureAppDelegate.h
//  temperature
//
//  Created by Matt on 8/20/09.
//  Copyright 25appsinaug 2009. All rights reserved.
//
/*
 
 This work is licensed under the Creative Commons Attribution-Noncommercial-Share Alike 3.0 United States License.
 To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/us/ or send a letter to Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
 */
#import <UIKit/UIKit.h>

@class temperatureViewController;

@interface temperatureAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    temperatureViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet temperatureViewController *viewController;

@end

