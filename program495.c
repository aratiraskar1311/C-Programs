

#include<stdio.h>                  //printf
#include<unistd.h>              //all standards 
#include<fcntl.h>               //optional but windows sathi
#include<stdlib.h>              //dynamic memory
#include<string.h>

int main()
{
    int fd = 0;                         //file discripter
    char FileName[30];
    char Buffer[100] = {'\0'};
    int iRet = 0;
    int i = 0;
    int iCount = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);         

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }
    
    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
       for(i = 0; i < iRet; i++)
       {
            if(Buffer[i] >= '0' && Buffer[i] <= '9')
            {
                iCount++;
            }
       }
    }
    
   printf("Nummber of  digits are : %d\n",iCount);
   
    close(fd);

    return 0;

}



