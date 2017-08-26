//
//  SCPostDetailViewController.h
//  SocialApp
//
//  Created by matianju on 8/24/17.
//  Copyright © 2017 TianjuMa. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
