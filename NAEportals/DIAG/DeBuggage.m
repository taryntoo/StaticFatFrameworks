/** @brief DeBuggage
 Debugging, Assertions, System query, and Logging tools.

 Created by taryn 2013

 Code usable from .c or .m files, providing plain c APIs or ObjC class 
 methods for the library as needed by callers. A lot of DeBuggage's
 functionality is in its header file. As much as reasonable, files
 like this should never declare or use special types, and should
 limit dependencies.

 */

#import <UIKit/UIKit.h>

#import "DeBuggage.h"



/** @brief cheap way to check for device type  
 As of early 2013, phone and pad were the only
 enumerated idioms in UIDevice.h.
 */
int ScreenBiggerThanPhone(void)
{
#if ClarityIsTheGoal
    unsigned int idiomi = [[UIDevice currentDevice] userInterfaceIdiom];
    switch(idiomi){
        case(UIUserInterfaceIdiomPhone):
            return 0;
        case(UIUserInterfaceIdiomPad):
        default:
            return 1;
    }   // ends switch on idiomi
#else // just do it
    if([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        return 0;
    }
#endif // simplicity
    return 1;
}

@implementation DeBuggage

@end
