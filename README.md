# StaticFatFrameworks
Slides, notes, and project files for a presentation on creating static fat frameworks for iOS  by Taryn VanWagner

In the bad old days, XCode would not permit the creation of Fat (containing code for multiple CPU types) Framework Libraries targeting iOS. This was a huge drawback because the iOS simulator ran x86 code, but the iPhone and iPad were ARM based, meaning you could not package libs that ran in both targets. The scripts and settings presented here permitted the creation and deployment of 'Fat' libs that supported cross-platform execution.

This was presented to South Florida Cocoa developers in March, 2013. 
https://www.meetup.com/Cocoa-Developers/events/109204622/ 
(A typo in the meetup details incorrectly promised 'Steve' will present, but this was Taryn's research and documentation, and she did the presentation.)
