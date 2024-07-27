//Read data in a file

/*
I/P : Enter the file name that you want to open :demo.txt
O/P : Data from file : Hello worl
      Data from file : ding with
*/

#include<stdio.h>                  //printf
#include<unistd.h>              //all standards 
#include<fcntl.h>               //optional but windows sathi
#include<stdlib.h>              //dynamic memory
#include<string.h>

int main()
{
    int fd = 0;                         //file discripter
    char FileName[30];
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);         

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }
    
    iRet = read(fd,Arr,10);

    printf("Data from file : %s\n",Arr);

    iRet = read(fd,Arr,10);
    
    printf("Data from file : %s\n",Arr);


    close(fd);

    return 0;

}



