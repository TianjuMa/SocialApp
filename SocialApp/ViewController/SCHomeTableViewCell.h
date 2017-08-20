//
//  SCHomeTableViewCell.h
//  SocialApp
//
//  Created by matianju on 8/20/17.
//  Copyright © 2017 TianjuMa. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SCPost;

@interface SCHomeTableViewCell : UITableViewCell

- (void)loadCellWithPost:(SCPost *)post;
+ (CGFloat)cellHeight;

@end
