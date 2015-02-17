//
//  ViewController.h
//  estimote-beacon-demo
//
//  Created by Jiri Zachar on 17.02.15.
//  Copyright (c) 2015 Jiri Zachar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ESTBeacon.h"
#import "ESTBeaconManager.h"

typedef enum : int
{    ESTScanTypeBluetooth,
     ESTScanTypeBeacon
}ESTScanType;


@interface ViewController : UIViewController <ESTBeaconManagerDelegate>{
}

@property (nonatomic, copy)     void (^completion)(ESTBeacon *);
@property (nonatomic, assign)   ESTScanType scanType;

@property (nonatomic, strong) ESTBeaconManager *beaconManager;
@property (nonatomic, strong) ESTBeaconRegion *region;
@property (nonatomic, strong) NSArray *beaconsArray;


- (id)initWithScanType:(ESTScanType)scanType completion:(void (^)(ESTBeacon *))completion;

@end

