//write data  in file

/*
I/P : Enter the file name that you want to open : demo.txt
NO O/P
*/


#include<stdio.h>                  //printf
#include<unistd.h>              //all standards 
#include<fcntl.h>               //optional but windows sathi
#include<stdlib.h>              //dynamic memory

int main()
{
    int fd = 0;                         //file discripter
    char FileName[30];

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);         

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }
    
    write(fd,"Hello world",11);

    close(fd);

    return 0;

}



