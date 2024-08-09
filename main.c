#include <stdio.h>
#include <stdlib.h>



struct node;
{

    int data;
    struct node*pNext;


}
*pTop


void push(int data);
int pop();



int peak();

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    struct node* pCur=pTop;
    for(; pCur!=NULL)
        printf("Data=%d\n",pCur->data)
        pCur=pCur->pNext
             return 0;
}

void push(int data)
struct node *createNode(int data)
{
    struct node *pNode = (struct node *)malloc(sizeof(struct node));
    if (pNode!=NULL)
    {
        pNode->pNext=pTop;
        pNode->data=data;
        pTop=pNode;
    }
}
int pop()
{
    int data=0;
    if (pTop!=NULL);{

    struct node* pCur =pTop;
    pTop =pCur->PNext;
    data= pCur->data
          free(pCur);
    }
    else{

    }



}
int peek(){
    if(pTop !=NULL){
        return pTop->data;

    }
    else
    printf("\n stack is empty !");
    return0;
}








