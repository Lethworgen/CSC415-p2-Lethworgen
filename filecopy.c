#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//You may also add more include directives as well.

// THIS VALUE CANNOT BE CHANGED.
// You should use this value when creating your buffer.
// And also to limit the amount of bytes each read CAN do.
#define BUFF_MAX 13
// DO NOT CHANGE ABOVE



int main(int argc, char const *argv[])
{

    char fileName[256];
    char outputName[256];
    char buf[BUFF_MAX];
    char readBuffer[BUFF_MAX] = {0};
    int inputFd, outputFd;
    ssize_t bytesRead, bytesWritten;

    //acquire input file name
    //Write out Prompt
    printf("Welcome to the Copy Program by Kevin Truong!\n");
    printf("Print the name of the file you want to copy.\n");
    //Type the file name & hit return
    scanf("%s",fileName);
    //Acquire outputfile name
    printf("Print the name of the output file.\n");
    scanf("%s", outputName);
    //printf("%s\n", fileName);
    //printf("%s\n",outputName);

    //Open the input file
    inputFd = open(fileName, O_RDONLY);
    if(inputFd < 0){
        printf("File does not exist.\n");
        return -1;
    }
    //Create the output file
    outputFd = open(outputName, O_RDWR|O_EXCL|O_CREAT, 00644);
    if(outputFd < 0){
        printf("File already exists.\n");
        return -2;
    }

    //loop write function to copy file
    do{
        //Read File
        bytesRead = read(inputFd,readBuffer,BUFF_MAX);
        //Error handling
        if(bytesRead < 0){
            printf("Error reading file.\n");
            close(inputFd);
            return -3;
        }
        //Write File
        bytesWritten = write(outputFd,readBuffer,bytesRead);
        //Error Handling
        if(bytesWritten < 0){
            printf("Error creating file.\n");
            close(inputFd);
            close(outputFd);
            return -4;
        }
    }while(bytesRead !=0);

    printf("Copy successful.\n");

    return 0;
}
