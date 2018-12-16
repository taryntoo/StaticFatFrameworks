/** @brief  NAEportals.h
Created by taryn on 3/24/13.
Copyright (c) 2013 Ornae. All rights reserved.

This header should generally be usable from both .c and .m files, providing
plain c APIs or ObjC class definitions for the library as needed by callers.

*/

int  NAEportalsInit();
void NAEportalsClose();
int  NAEportalsInfo();
int  NAEportalsPhoneHome();

#ifdef __OBJC__
// #import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface NAEportals : NSObject

@end
#endif  // __OBJC__
