//open file that file is already created.

/*
I/P : Enter the file name that you want to open :abc.txt
O/P : File gets succesfully opened with fd 3
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

    fd = open(FileName,O_RDWR);         //RDWR - read and write

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File gets succesfully opened with fd %d\n",fd);
    }

    close(fd);

    return 0;

}



/*
open file parameter :

O_RDONLY        READ MODE
O_WRONLY        WRITE MODE
O_RDWR          READ + WRITE MODE   => only used this file
O_CREATE        CREATE MODE
O_APPEND        APPEND MODE

*/