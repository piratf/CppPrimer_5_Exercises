Q: Change the program to return -1. A return value of -1 is often treated as an indicator that the program failed. Recompile and rerun your program to see how your system treats a failure indicator from main.

A: I have tried on Windows 10 and Ubuntu 14.04 with g++ 4.9.2, both of them show nothing when the compiled program return -1. but when I'm using `Sublime Text build3083` to build and run the program, the statuas bar will print "[Finished in 0.6s with exit code 4294967295]" and print my dir, path and the command been used in this compile. It's means my editor catch the error when running this program.

Codes in file `ex.1.2.cpp`.