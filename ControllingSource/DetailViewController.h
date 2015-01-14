//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Nikola Jolic on 1/14/15.
//  Copyright (c) 2015 Nikola Jolic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

