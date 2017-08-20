//
//  SCPost.h
//  SocialApp
//
//  Created by matianju on 8/17/17.
//  Copyright © 2017 TianjuMa. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLLocation;

@interface SCPost : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) NSDate *postDate;
@property (nonatomic, strong) CLLocation *location;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end
