//
//  DetailViewController.h
//  Recorder
//
//  Created by Keaton Burleson on 7/7/13.
//  Copyright (c) 2013 Touchium. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
