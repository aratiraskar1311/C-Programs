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

    printf("Head : %d\n",Head);        //100
    printf("&obj1 : %d\n",&obj1);       //100
    printf("&obj2 : %d\n",&obj2);      //200
    printf("&obj3 : %d\n",&obj3);      //300

    printf("Head->data : %d\n",Head->data);     //11
    printf("Head->next : %d\n",Head->next);         //200
    printf("Head->next->next : %d\n",Head->next->next);             //300
    printf("Head->next->next->next : %d\n",Head->next->next->next); //NULL  0

    printf("Head->next->data : %d\n",Head->next->data);     //21
    printf("Head->next->next->data : %d\n",Head->next->next->data);     //51

    return 0;
}