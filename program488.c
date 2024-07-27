//open,read,create,write,close

#include<stdio.h>                  //printf
#include<unistd.h>              //all standards 
#include<fcntl.h>               //optional but windows sathi
#include<stdlib.h>              //dynamic memory
#include<string.h>

#define BUFFER_SIZE 1024                    //macro

int main()
{
    int fdRead = 0;         
    int fdWrite = 0;                  
    char FileName[30];
    char Buffer[BUFFER_SIZE] = {'\0'};             //1kb = 1024 bytes
    int iRet = 0;

    //open existing file
    printf("Enter the existing file name that you want to open : \n");
    scanf("%s",FileName);

    fdRead = open(FileName,O_RDWR);         

    if(fdRead == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }
    
    //create new file
    printf("Enter the name of file that you want to create : \n");
    scanf("%s",FileName);


    fdWrite = creat(FileName,0777);                       
    if(fdWrite == -1)
    {
        printf("Unable to create new file\n");
        return 0;
    }

    //exiting file data copy into new file
    while((iRet = read(fdRead,Buffer,sizeof(Buffer))) != 0)
    {
        write(fdWrite,Buffer,iRet);
        memset(Buffer,0,sizeof(Buffer));                //clean
    }
    
    close(fdRead);
    close(fdWrite);

    return 0;

}



