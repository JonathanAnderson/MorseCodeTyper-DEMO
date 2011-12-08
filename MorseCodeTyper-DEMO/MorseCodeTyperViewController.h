//
//  MorseCodeTyperViewController.h
//  MorseCodeTyper-DEMO
//
//  Created by Jonathan Anderson on 12/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface MorseCodeTyperViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *codeDisplay;
@property (weak, nonatomic) IBOutlet UILabel *textDisplay;
@end
