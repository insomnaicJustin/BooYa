//
//  BooYaViewController.h
//  BooYa
//
//  Created by נועם מה-יפית on 11/9/11.
//  Copyright 2011 OnO Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BooYaViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView     *_tableView;
    NSMutableArray  *_dataSource;
}
@property (nonatomic, retain) IBOutlet UITableView *_tableView;
@end
