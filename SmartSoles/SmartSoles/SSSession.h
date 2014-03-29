//
//  SSSession.h
//  SmartSoles
//
//  Created by Anupam Jindal on 3/29/14.
//  Copyright (c) 2014 Anupam Jindal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSSession : NSObject

@property (nonatomic, strong) NSManagedObjectContext *context;

+ (SSSession*)sharedSession;
+ (id)sharedInstance;

@end
