//
//  SecondViewController.h
//  SM_4
//
//  Created by student on 11/15/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;
@protocol SecondViewControllerDelegate <NSObject>
- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString *) item;

@end


@interface SecondViewController : UIViewController

@property (nonatomic,weak) IBOutlet UITextField *modifiedSurnameTextField;
@property NSString *surname;

@property (nonatomic,weak) id <SecondViewControllerDelegate> delegate;

@property (weak, nonatomic) IBOutlet UIButton *backButton;
- (IBAction) goBack;

@end

NS_ASSUME_NONNULL_END
