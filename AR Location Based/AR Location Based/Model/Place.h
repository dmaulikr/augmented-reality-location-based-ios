//
//  Place.h
//  AR Location Based
//
//  Created by Jhonathan Wyterlin on 09/05/15.
//  Copyright (c) 2015 Jhonathan Wyterlin. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLLocation;

@interface Place : NSObject

@property (nonatomic, strong) CLLocation *location;
@property (nonatomic, copy) NSString *reference;
@property (nonatomic, copy) NSString *placeName;
@property (nonatomic, copy) NSString *address;

-(id)initWithLocation:(CLLocation *)location reference:(NSString *)reference name:(NSString *)name address:(NSString *)address;

@end