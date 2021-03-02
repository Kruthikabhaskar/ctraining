<!-- Printing alternative nodes in linked list and storing them in stack-->

#include<stdio.h>
struct node{
    int data;
    struct node *link;
};

 

struct node *root=NULL;
int choice,data;
int stack[10];top=-1;
int main()
{
    while(choice!=4){
        printf("Enter the choice\n");
        printf("1.insertend\n2.display3.stackdispaly\n4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            insertend();
            break;
            
            case 2:
            display();
            break;
            
            case 3:stackdisplay();
            break;
            
            case 4:
            exit(0);
            break;
            
            default:
            printf("----------wrong choice-------\n");
            break;
        }
    }
}

 

void insertend()
{
    if(root == NULL){
        root = (struct node*)malloc(sizeof(struct node));
        printf("enter the data\n");
        scanf("%d",&data);
        root->data=data;
        root->link=NULL;
    }
    else
    {
    struct node *temp=root,*p;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    p=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&data);
    p->data=data;
    temp->link=p;
    p->link=NULL;
   
    }
    
}
void display(){
    if(root==NULL){
        printf("list is empty\n");
        
    }
    else
    {
        struct node *temp;
        temp=root;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->link;
        }
       
}
}
void stackdisplay(){
     struct node *temp;
     printf("elements of stack are : \n");
        temp=root;

 

            while(temp!=NULL){
                top++;
                if(temp->data%2!=0){
               stack[top]=temp->data;
                }
                if(stack[top]==0){
                    printf("");
                }
                else{
                printf("%d ",stack[top]);
                }
                temp=temp->link;
            
            }
}
