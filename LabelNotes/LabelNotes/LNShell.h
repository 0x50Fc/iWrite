/**
 *  LNShell.h
 *  LabelNotes
 *
 *  Created by zhang hailong on 13-6-8.
 *  Copyright hailong.org 2013年. All rights reserved.
 */


#import <UIKit/UIKit.h>
#import <vTeam/vTeam.h>
#import "LNContext.h"

@interface LNShell : VTShell<UIApplicationDelegate> {
}

@property (strong, nonatomic) IBOutlet UIWindow *window;

@end
