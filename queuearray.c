#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==n-1)
    {
        printf("queue is full");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        printf("enter data :");
        scanf("%d",&x);
        queue[rear]=x;
    }
    else
    {
        rear++;
        printf("enter data :");
        scanf("%d",&x);
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        printf("the deleted element is :%d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("the deleted element is :%d",queue[front]);
        front++;
    }
}
void display()
{
    if(front==-1)
    {
        printf("list is empty");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
       printf("list is empty");
    }
    else
    {
        printf("%d",queue[front]);
    }
}

void main()
{
    int choice,a=1;
    int x;
    while(a)
    {
        printf("\n 1.create \n 2.display \n 3.delete \n 4.peek \n 5.exit \n");
        printf("enter choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue(x);
            break;
        case 2:
            display();
            break;
        case 3:
            dequeue();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(0);
        default:
            printf("invalid number");        
        }
    }
}