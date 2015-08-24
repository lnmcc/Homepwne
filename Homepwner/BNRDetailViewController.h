//
//  BNRDetailViewController.h
//  Homepwner
//
//  Created by sijiewang on 8/20/15.
//  Copyright (c) 2015 lnmcc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;

@interface BNRDetailViewController : UIViewController <UINavigationBarDelegate, UIImagePickerControllerDelegate, UITextFieldDelegate>

@property (nonatomic, strong) BNRItem *item;

@end
