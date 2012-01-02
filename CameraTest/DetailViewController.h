//
//  DetailViewController.h
//  CameraTest
//
//  Created by Ali Raza on 1/2/12.
//  Copyright (c) 2012 Welltime Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) UIImagePickerController *imgPicker;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

-(IBAction)takePicture:(id)sender;

@end
