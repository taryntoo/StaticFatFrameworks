//
//  NAEportals.m
//  NAEportals
//
//  Created by taryn on 3/24/13.
//  Copyright (c) 2013 Ornae. All rights reserved.
//

#import "NAEportals.h"
#import "DeBuggage.h"



int NAEportalsInit()
{
    // Bad form, a lib shouldn't really speak for the app it's in...but eh...
    openlog("NAEportals library", (LOG_CONS|LOG_PERROR|LOG_PID), LOG_DAEMON);
    return 1;
}

void NAEportalsClose()
{
    // Bad form, a lib shouldn't really speak for the app it's in...but eh...
    closelog();
}

int NAEportalsInfo()
{
    syslog(LOG_INFO, "%s, Hi, I'm an unhelpful log message.", __func__);
    return 1;
}

int  NAEportalsPhoneHome()
{

    return 1;
}


@implementation NAEportals

@end
