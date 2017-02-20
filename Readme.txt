*******************************************************
*  Description of the program
*******************************************************

The program “node” reads in a file called “input.txt” that has at least 
two lines and then it will insert each line into a node. It will use the
definitions in node.h to create a single linked list. The program will 
then delete the first and last lines. The last result is that it will
print out the remaining list to the screen and a file name “output.txt”.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read the lines from a file called input.txt, insert each line into
   a node creating a single linked list, and delete the first and last lines
   and display the remaining list to both screen and an output file called
   output.txt.

Name:  node.h
   Contains the definition for the class node.  

Name: node.cpp
   Defines and implements the node class. Contain the codes for returns 
   value of the length of the list, inserts a single node at the front of the
   list, inserts a single node just after the pointer sent in the parameter,
   removes a node at the front of the list, remove a single node just after 
   the pointer sent in the parameter, and displays to the stream listed.

*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on Xcode version 7.2 (7C68).  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [WoeHW4]

   Now you should see a directory named homework with the files:
        main.cpp
        node.h
        node.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [WoeHW1] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[node]

4. Delete the obj files, executables, and core dump by
   %./make clean
