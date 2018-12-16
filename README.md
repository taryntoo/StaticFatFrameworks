# StaticFatFrameworks
Slides, notes, and project files for a presentation on creating static fat frameworks for iOS  by Taryn VanWagner

Static lib notes.pdf & Static lib notes.rtfd are copyrighted and may not be redistributed.
The xcode projects and source files are released under the Apache license.

In the bad old days, XCode would not permit the creation of Fat (containing code for multiple CPU types) Library Frameworks targeting iOS. This was a huge drawback because the iOS simulator ran x86 code, but the iPhone and iPad were ARM based, meaning you could not package libs that ran in both targets. The scripts and settings presented here permitted the creation and deployment of 'Fat' libs that supported cross-platform execution.

This was presented to South Florida Cocoa developers in March, 2013. 
https://www.meetup.com/Cocoa-Developers/events/109204622/ 
(A typo in the meetup details incorrectly promised 'Steve' will present, but this was Taryn's research and documentation, and she did the presentation.)
