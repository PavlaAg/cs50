# CS50
This repository is meant to contain the source code for the CS50 course.

# Compile
How to compile your programs:
 - General template:
```
$ gcc <input-file-1.c> <input-file-2.c> -o bin/<name-of-executable>
```
Which is like saying "hey gcc compiler, take these input files, and generate an output executable with this name".

 - Example for division.c:
```
$ gcc division.c libcs50/src/cs50.c -o bin/division
```

*Remember that you must pass to the gcc compiler all the necessary .c files for each header file that is not a standard library.*

# Run the programs
```
./<program-name>
```
