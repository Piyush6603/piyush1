#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node* top=NULL;

void push(int value)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    if(top==NULL)
        newnode->next=NULL;
    else{
        newnode->next=top;
    }
    top=newnode;
    printf("node is inserted");
}
int pop()
{
    if(top==NULL)
    {
        printf("\nunderflow\n");
    }
    else{
        struct node *temp=top;
        int temp_data=temp->data;
        top=top->next;
        free(temp);
        return temp_data;
    }
}
void display()
{
    struct node *temp=top;
    if(top==NULL)
        printf("stack is empty");
    else{
        printf("the stack is :\n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int choice,value;
    while(1){
        printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
        printf("enter your choice :");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("enter the element to insert :");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                printf("popped element is :%d",pop());
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("invalid number");
        }
    }
}