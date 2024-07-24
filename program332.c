#include<stdio.h>
#include<stdlib.h>              //malloc,free

struct node                     //self referential structure
{
    int data;
    struct node *next;
};


typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


int main()
{
    PNODE Head = NULL;
    //struct node *Head = NULL;               //Head pointer create structure la point krnara

    NODE obj;
    //struct node obj;


    return 0;
}