//
//  DetailViewController.h
//  RiderTracker
//
//  Created by developer-hackintosh on 6/13/21.
//  Copyright (c) 2021 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
