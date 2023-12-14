//
//  ViewController.h
//  SM_4
//
//  Created by student on 11/15/23.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"
#import "SecondViewController.h"

@interface ViewController: UIViewController <SecondViewControllerDelegate>


@property(nonatomic,weak) IBOutlet UILabel *messageLabel;
@property(nonatomic,weak) IBOutlet UITextField *inputField;
@property(nonatomic,weak) IBOutlet UITextField *surnameTextField;

- (IBAction) enter;
- (void) prepareForSegue;
- (void) addItemViewController;

@end

