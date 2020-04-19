# .NET Profiler Template

This is a small starter example that enables you to write your own .NET profiler using the .NET Profiling API.

# Projectstructure
This project consists of three projects:

## ProfilerAtl
The profiler. Don't be afraid of C++ code :-)

## App
This can also be replaced by a normal batch file. It only exists to start the app to be profiled and attach the profiler by using some enviornment variables. 

## ErrorThrowingApp
This represents the app to be profiled. It continuously throws an exception.

# Links
I will maintain a list of links to some helpful resources here

[Creating a custom NET Profiler that logs function calls](https://www.codeproject.com/Articles/15410/Creating-a-Custom-NET-Profiler)
[Summary of Profiling API](http://web.archive.org/web/20090131074415/http://msdn.microsoft.com/en-us/magazine/cc301725.aspx)
+ You should read the section "Receiving Method Entry and Exit Notifications".
[http://www.blong.com/conferences/dcon2003/internals/profiling.htm#Ref1](http://www.blong.com/conferences/dcon2003/internals/profiling.html)