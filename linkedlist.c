#include <stdio.h>
#include <stdlib.h>
void insertbeg();
void insertend();
struct node{
    int data;
    struct node *link;
};
typedef struct node ll;
ll *first=NULL,*temp,*newnode,*cur,*temp1,*prev;
int data=0,choice=0,pos;
int main()
{
    while(choice != 8)
    {
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            insertbeg();
            break;
            case 2:
            insertend();
            break;
            case 3:
            insertatpos();
            break;
            case 4:
            print();
            break;
            case 5:
            deletebeg();
            break;
            case 6:
                deleteend();
                break;
            case 7:
                deleteatpos();
                break;
            case 8:
                exit(0);break;
            default: printf("wrong choice");
        }
    }

    return 0;
}
void menu()
{
    printf("\n Enter your choice \n");
    printf("1.Insert beg \n 2. Insert end \n 3.Insert at position \n 4. Print \n 5. Delete at beginning \n  6.Delete at end \n 7.Delete at given position\n 8. exit\n");
}
void insertbeg()
{
    if(first==NULL)
    {
        first=(ll*)malloc(sizeof(ll));
        printf("Enter the data\n");
        scanf("%d",&data);
        first->data=data;
        first->link=NULL;
    }
    else
    {
        temp=(ll *)malloc(sizeof(ll));
        printf("enter the data \n");
        scanf("%d",&data);
        temp->data=data;
        temp->link=first;
        first=temp;
    }
}
void print()
{
    
    if(first==NULL)
    {
        printf("thenlist is empty\n");
    }
    else
    {
         temp=first;
        while(temp != NULL)
        {
             printf("[%d %u]->",temp->data,temp->link);
            temp=temp->link;
            //printf("[%d %u]->",temp->data,temp->link);
        }
    
    }
   
    
}
void insertend()
{
    if(first==NULL)
    {
        first=(ll*)malloc(sizeof(ll));
        printf("Enter data \n");
        scanf("%d",&data);
        first->data=data;
        first->link=NULL;
    }
    else
    {
        temp=first;
        while(temp->link !=NULL)
        {
            temp=temp->link;
        }
        newnode=(ll*)malloc(sizeof(ll));
        printf("enter the data \n");
        scanf("%d",&data);
        newnode->data=data;
        temp->link=newnode;
        newnode->link=NULL;
        
    }
}

void insertatpos()
{
    temp=(ll*)malloc(sizeof(ll));
    printf("enter the data \n");
    scanf("%d",&data);
    temp->data=data;
    printf("\n Enter the position:");
    scanf("%d",&pos);
    cur=first;
    if(pos==1)
    {
        temp->link=cur;
        first=temp;3
        return;
    }
    for(int i=1;i<pos-1;i++)
    {
        cur=cur->link;
    }
    temp->link=cur->link;
    cur->link=temp;
}

void deletebeg()
{
    if(first==NULL)
    {
        printf(" \n the list is empty\n");
        return;
    }
   printf("deleted node is %d",first->data);
   temp1=first;
   first=first->link;
   free(temp1);
}


void deleteend()
{
    if(first == NULL)
    {
        printf("stack underflow\n");
        return;
    }
    else if(first->link==NULL)
    {
        printf("%d deleted data is" ,first->data);
        free(first);
        return;
    }
    else
    {
        prev=NULL;
        temp=first;
        while(temp->link != NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        printf("%d id deleted",temp->data);
        free(temp);
        prev->link=NULL;
    }
    
}
void deleteatpos()
{
    temp=first;
    printf("enter the position to delete \n");
    scanf("%d",&pos);
    if(pos==0)
    {
        deletebeg();
        return;
    }
    for(int i=1;i<pos;i++)
    {
        temp1=temp;
        temp=temp->link;
    }
    temp1->link=temp->link;
    printf("deleted node is %d \n",temp->data);
    free(temp);
}
