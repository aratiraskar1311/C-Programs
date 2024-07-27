//create a file

/*
O/P : File gets succesfully created with fd 3
*/

#include<stdio.h>                  //printf
#include<unistd.h>              //all standards 
#include<fcntl.h>               //optional but windows sathi
#include<stdlib.h>              //dynamic memory

int main()
{
    int fd = 0;                         //file discripter

    fd = creat("Marvellous.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets succesfully created with fd %d\n",fd);
    }


    return 0;

}