//
//  AppDelegate.h
//  FirstTestApp
//
//  Created by Vipin Joshi on 06/01/17.
//  Copyright © 2017 Vipin Joshi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

