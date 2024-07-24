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
    PNODE Head = NULL;          //pointer create
    NODE obj1;                  //object create
    NODE obj2;
    NODE obj3;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    Head = &obj1;

    return 0;
}