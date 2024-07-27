//file create -  and accept name from user

/*
I/P :Enter the file name that you want to create : abc.txt
O/P : File gets succesfully created with fd 3
*/

#include<stdio.h>                  //printf
#include<unistd.h>              //all standards 
#include<fcntl.h>               //optional but windows sathi
#include<stdlib.h>              //dynamic memory

int main()
{
    int fd = 0;                         //file discripter
    char FileName[30];

    printf("Enter the file name that you want to create : \n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets succesfully created with fd %d\n",fd);
    }

    close(fd);

    return 0;

}