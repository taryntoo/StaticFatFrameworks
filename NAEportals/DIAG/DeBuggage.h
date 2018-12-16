/** @brief DeBuggage Created by taryn
 Debugging, Assertions, System query, and Logging tools.
 (most stripped out for this demo)
 */

/** @brief Use the ancient and standard BSD syslog, which knows how to 
 background, prioritize, age, prune, revector...all the stuff we claim
 to want in a logger.
 */
#import <fcntl.h>
#import <syslog.h>

/*
  syslog quick reference:
    Open it once, to set the output streams and files it will use for your messages. (optional, but helpful):
        openlog("SomeApp", (LOG_CONS|LOG_PERROR|LOG_PID), LOG_DAEMON);
 
    Write as needed:
        syslog(LOG_INFO, "%s, terminally confused, has calculated pi to the the value of %f", __func__, fTiger);
 
    Close it once, popping its output streams and fies to a prior state. (optional, but helpful):
        closelog();

  Log levels:
	LOG_EMERG	 system is unusable 
    LOG_ALERT	 action must be taken immediately 
	LOG_CRIT	 critical conditions 
	LOG_ERR		 error conditions 
    LOG_WARNING	 warning conditions 
	LOG_NOTICE	 normal but significant condition
	LOG_INFO	 informational 
	LOG_DEBUG	 debug-level messages 
 
 !!!SECURITY ISSUE!!! Like any other printf-like function, syslog() calls should be
 formatted to protect against embedded format specifiers in strings from external sources. 
 Such strings are a classic source of vulnerabilities. A web search like 
 "printf format specifier security" will turn up good discussions of the issue.
 
 Put simply, given an unknown string s, NEVER call:
    syslog(LOG_ERR,s); or printf(s);
 Instead use:
    syslog(LOG_ERR,"The remote system returned error: %s", s); or printf("%s",s);
 
 'man syslog' at any unix shell or search engine will tell you more about syslog.
 */


#if ConstantlyHangOnUnimplementedFunctions
# define HangNow  {syslog(LOG_ERR,"Fatal missing functionality in %s\n",__func__);assert(0);}
#else
# define HangNow {syslog(LOG_ERR,"Fatal missing functionality in %s\n",__func__);}
#endif


#ifdef __OBJC__
/** @brief ObjC only code begins here */

// #import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface DeBuggage : NSObject

@end

#endif //  __OBJC__


