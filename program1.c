#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// Juna naw             Nawin naw
// struct node              NODE
// struct node *            PNODE
// struct node **           PPNODE

/*
    1 : Allocate memory for node
    2 : Initialise the node
    3 : Check whether LL is empty or not
    4 : If LL is empty the new node is the first node
    5 : If LL contains atleast one node in it then store the address of previous first node in the next pointer of new node

*/
void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)       // If LL is empty
    {
        *Head = newn;
    }
    else        // If LL contains atleast one node
    {
        newn -> next = *Head;
        *Head = newn;
    }
}
void Display(PNODE Head)
{
    int sum=0;
    printf("\n");
    while(Head != NULL)
    {
        printf("%d\t",Head -> data);
        Head = Head->next;
    }
    printf("\n");
}
int Summation(PNODE Head)
{
    int sum=0;
    while(Head!=NULL)
    {
        sum=sum+Head->data;
       Head=Head->next;
    }
    return sum;
}
int main()
{
    int iRet=0;
    PNODE First = NULL;     // struct node * First  = NULL;

    InsertFirst(&First,101);    // InsertFirst(60, 101);
    InsertFirst(&First,51);     // InsertFirst(60,51);
    InsertFirst(&First,21);
    InsertFirst(&First,10);

    Display(First);
  iRet=Summation(First);
  printf("Sumation is%d",iRet);
    return 0;
}