//
//  I3ViewController.h
//  BetweenKit
//
//  Created by stephen fortune on 09/14/2014.
//  Copyright (c) 2014 stephen fortune. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BetweenKit/UITableView+I3Collection.h>
#import <BetweenKit/I3DragDataSource.h>


@interface I32TablesAllPropertiesViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, I3DragDataSource>

@property (nonatomic, weak) IBOutlet UITableView *leftTableView;

@property (nonatomic, weak) IBOutlet UITableView *rightTableView;

@property (nonatomic, weak) IBOutlet UIView *deleteArea;

@end
