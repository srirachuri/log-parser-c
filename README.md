log-parser-c
A simple C program to read and filter system log files.

Description
This program reads a system log file line by line and displays only those lines that contain the keyword `"ERROR"`.  
It is useful for quickly identifying error messages from large log files.

 How to Run
1. Make sure you have a log file named `system.log` in the same folder.
2. Compile the code using a C compiler:

gcc log_parser.c -o log_parser
