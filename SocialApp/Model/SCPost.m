//
//  SCPost.m
//  SocialApp
//
//  Created by matianju on 8/17/17.
//  Copyright © 2017 TianjuMa. All rights reserved.
//

#import "SCPost.h"
#import <MapKit/MapKit.h>

@implementation SCPost

- (instancetype)initWithDictionary: (NSDictionary *) dictionary
{
    self = [super init];
    if (self != nil) {
        self.message = dictionary[@"message"];
    }
    return self;
}

@end
