//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Nikola Jolic on 1/14/15.
//  Copyright (c) 2015 Nikola Jolic. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

