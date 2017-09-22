//
//  SecondViewController.h
//  WheatherApp
//
//  Created by Student-15 on 08/09/17.
//  Copyright (c) 2017 Student-15. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Wheather.h"

@interface SecondViewController : UIViewController<NSURLConnectionDelegate,NSURLConnectionDataDelegate>
@property (weak, nonatomic) IBOutlet UILabel *latlbl;
@property (weak, nonatomic) IBOutlet UILabel *longtbl;
@property (weak, nonatomic) IBOutlet UILabel *preslbl;
@property (weak, nonatomic) IBOutlet UILabel *humidlbl;
@property (weak, nonatomic) IBOutlet UILabel *templbl;

@property (weak, nonatomic) IBOutlet UILabel *infolbl;

@property (weak, nonatomic) IBOutlet UILabel *overviewlbl;

//For parsing
@property(nonatomic,retain)NSMutableData *buffer;
@property(nonatomic,retain)NSString *tempstr,*tempcity;



@end
