# CSC 415 - Project 2 - File copy

## Student Name : Kevin Truong

## Student ID   : 917589028

## Build Instructions
Clone the repository. cd to the location of the repository. Type the following command to build the program:
gcc -I -Wall filecopy.c -o fc

## Run Instructions
in the directory with the file, enter the following command:
./fc

## strace/dtruss output
Welcome to the Copy Program by Kevin Truong!<br/>
Print the name of the file you want to copy.<br/>
filecopy.c<br/>
Print the name of the output file.<br/>
test.c<br/>
Copy successful.<br/>
<br/>
% time &emsp; &nbsp; seconds &emsp; usecs/call &nbsp; &nbsp; &nbsp;  calls &emsp; errors &emsp; &emsp;     syscall<br/>
------ &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ----------- &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ----------- &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; --------- &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; --------- &nbsp;&nbsp;&nbsp; ----------------<br/>
  0.00  &emsp; &nbsp; &emsp; &nbsp;  0.000000     &nbsp; &nbsp; &nbsp;       0   &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;      156 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;                    read //read the file 13 bits at a time.<br/>
  0.00  &emsp; &nbsp; &emsp; &nbsp;  0.000000   &nbsp;&nbsp;  &nbsp;        0    &emsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;    157 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;                    write // Writes to an output file 13 times.<br/>
  0.00  &emsp; &nbsp; &emsp; &nbsp;  0.000000   &nbsp;&nbsp;  &nbsp;        0   &emsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;      2   &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;                 close //Closed both input and output files.<br/>
  0.00  &emsp; &nbsp; &emsp; &nbsp;  0.000000   &nbsp; &nbsp;     0   &emsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;      4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;                   fstat//Returns file information<br/>
  0.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        1  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;       1  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;       lseek //Error. File descriptor associated with pipe<br/>
  0.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        5     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;              mmap //Creates new mapping in virtual address space<br/>
  0.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        4     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;              mprotect //Changes access protections for calling memory<br/>
  0.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        1     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;              munmap//unmap pages of memory<br/>
  0.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        3     &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;              brk//Changes the location of the program break<br/>
  0.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        3  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;       3  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;        access //Libary was unable to access the file<br/>
  0.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        1    &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;               execve<br/>
  0.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        1    &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;               arch_prctl<br/>
  0.00&emsp; &nbsp; &emsp; &nbsp;    0.000000    &nbsp; &nbsp; &nbsp;       0  &emsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;        4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;                  openat<br/>
------ ----------- ----------- --------- --------- ----------------<br/>
100.00 &emsp; &nbsp; &emsp; &nbsp;   0.000000 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;                 342  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;       4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; total //There were 4 errors total. File still copied<br/>


## What does this program do?
This program copies a file in the same directory. Asks for user input for both file to copy and name of output file. Copies files using only system calls.

