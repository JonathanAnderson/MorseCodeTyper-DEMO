//
//  TapModel.h
//  MorseCodeTyper-DEMO
//
//  Created by Jonathan Anderson on 12/7/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TapModel : NSObject

+ (NSString *)morseFromText:(NSString *)text;
+ (NSString *)textFromMorse:(NSString *)morse;

- (void)tapStart;
- (void)tapEnd;
- (void)reset;
- (NSString *)displayMorse;
- (NSString *)displayText;

@end
