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

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) CLLocation *location;

@end
