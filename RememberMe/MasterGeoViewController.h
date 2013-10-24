//
//  MasterGeoViewController.h
//  RememberMe
//
//  Created by Ibrahim Ayad on 10/23/13.
//  Copyright (c) 2013 Daniel Baldwin & Ibrahim Ayad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <Parse/Parse.h>

@interface MasterGeoViewController : PFQueryTableViewController <CLLocationManagerDelegate>



@property (nonatomic,retain) CLLocationManager *locationManager;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UITableViewCell *tableViewCell;


- (IBAction)insertCurrentLocation:(id)sender;

@end
