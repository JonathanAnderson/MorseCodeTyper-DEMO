//
//  MorseCodeTyperViewController.m
//  MorseCodeTyper-DEMO
//
//  Created by Jonathan Anderson on 12/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "MorseCodeTyperViewController.h"
#import "TapModel.h"

@interface MorseCodeTyperViewController()
@property (nonatomic, strong) TapModel *taps;
@end

@implementation MorseCodeTyperViewController
@synthesize codeDisplay = _codeDisplay;
@synthesize textDisplay = _textDisplay;
@synthesize taps = _taps;

- (TapModel *)taps {
    if (!_taps) _taps = [[TapModel alloc] init];
    return _taps;
}

- (IBAction)tapStart {
    [self.taps tapStart];
}

- (IBAction)tapStop {
    [self.taps tapEnd];
    self.codeDisplay.text = [self.taps displayMorse];
    self.textDisplay.text = [self.taps displayText];
}
- (IBAction)tapReset {
    [self.taps reset];
    self.codeDisplay.text = @"";
    self.textDisplay.text = @"";
}

@end
