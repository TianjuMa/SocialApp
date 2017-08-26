//
//  SCCreatePostViewController.h
//  SocialApp
//
//  Created by matianju on 8/24/17.
//  Copyright © 2017 TianjuMa. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end

