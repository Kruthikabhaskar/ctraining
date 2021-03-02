#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void pop();
void push();
void sprint();
void ssearch();

struct snode{
    int sdata;
    struct snode *slink;
};

typedef struct snode stack;
stack *top=NULL,*snewnode=NULL,*stemp=NULL;

int choice,sizeofst=0;


int main()
{
  do{
      menu();
      scanf("%d",&choice);
      switch(choice)
      {
          case 1: push();
                  break;
          case 2: pop();
                  break;
          case 3: ssearch();
                  break;
          case 4: sprint();
                  break;
          default:printf("wrong choice\n");
                   break;
      }
  }while(choice!=5); 
}

void menu()
{
    printf("Select choice from bellow\n");
    printf("1.push\n2.pop\n3.Search in stack\n4.print elements of Stack\n5.Exit\n");
}

void push()
{
    int value;
    printf("Enter the data\n");
    scanf("%d",&value);
    snewnode=(stack*)malloc(sizeof(stack));
    snewnode->sdata=value;
    if(top==NULL)
    {
        top=snewnode;
        sizeofst++;
        printf("Elemet pushed\n");
    }
    else
    {
        
        snewnode->slink=top;
        top=snewnode;
        sizeofst++;
        printf("Elemet pushed\n");
    }
}

void pop()
{
  if(top==NULL)
  {
      printf("stack is empty\n");
  }
  else
  {
      stemp=top;
      top=top->slink;
      free(stemp);
      sizeofst--;
  }
}

void ssearch()
{
    int value,flag=0;
     if(top==NULL)
    {
        printf("empty stack\n");
    }
    else
    {
        printf("enter the element to be searched\n");
        scanf("%d",&value);
        stemp=top;
        while(stemp->slink!=NULL)
        {
            if(stemp->sdata==value)
            {
                flag=1;
                printf("Element found\n");   
                break;
            }
            else
            {
                stemp=stemp->slink;
            }
        }
        if(flag==0)
        {
            printf("Element not found\n");
        }
    }
}

void sprint()
{
    stemp=top;
    while(stemp!=NULL)
    {
        printf("%d-->%u\n",stemp->sdata,stemp->slink);
        stemp=stemp->slink;
    }
}

