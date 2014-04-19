//
//  DogelatorViewController.h
//  Dogelator
//
//  Created by Trent Underwood on 4/16/14.
//  Copyright (c) 2014 Trent Underwood & Wilson Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DogelatorViewController : UIViewController{
    
}

@property (nonatomic, weak) IBOutlet UITextView *doge;
@property (nonatomic, weak) IBOutlet UITextView *calc;
@property (nonatomic, weak) IBOutlet UIButton *zero;
@property (nonatomic, weak) IBOutlet UIButton *one;
@property (nonatomic, weak) IBOutlet UIButton *two;
@property (nonatomic, weak) IBOutlet UIButton *three;
@property (nonatomic, weak) IBOutlet UIButton *four;
@property (nonatomic, weak) IBOutlet UIButton *five;
@property (nonatomic, weak) IBOutlet UIButton *six;
@property (nonatomic, weak) IBOutlet UIButton *seven;
@property (nonatomic, weak) IBOutlet UIButton *eight;
@property (nonatomic, weak) IBOutlet UIButton *nine;
@property (nonatomic, weak) IBOutlet UIButton *plus;
@property (nonatomic, weak) IBOutlet UIButton *minus;
@property (nonatomic, weak) IBOutlet UIButton *times;
@property (nonatomic, weak) IBOutlet UIButton *divide;
@property (nonatomic, weak) IBOutlet UIButton *equal;
@property (nonatomic, weak) IBOutlet UIButton *point;
@property (nonatomic, weak) IBOutlet UIButton *clear;
@property (nonatomic, weak) IBOutlet UIButton *carrot;
@property (nonatomic, weak) IBOutlet UIButton *left;
@property (nonatomic, weak) IBOutlet UIButton *right;


- (IBAction)calculate:(UIButton *)equals;
- (IBAction)displayCalculation:(UIButton *) number;
//remember to add a backspace button and <- and ->

@end



