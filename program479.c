//Append file mode(previous data store hoto)

/*
I/P : Enter the file name that you want to open :demo.txt
O//P :Enter the data that you want to write :Hi
Number of bytes written into the file are : 2
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
    char Arr[100];
    int iRet = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR | O_APPEND);         

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }
    
    printf("Enter the data that you want to write : \n");
    scanf(" %[^'\n']s",Arr);

    iRet = write(fd,Arr,strlen(Arr));
    printf("Number of bytes written into the file are : %d\n",iRet);

    close(fd);

    return 0;

}



