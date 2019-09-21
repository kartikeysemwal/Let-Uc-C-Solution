#include<stdio.h>
#define capacity 5
int queue[capacity];
int front=0;
int rear=0;
int main()
{
    int choice,element,i;
    do
    {
    printf("Enter the operation you want to perform\n1 for insertion\n2 for deletion\n3 for displaying\n4 Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            if(capacity==rear)
            {
                printf("Queue is full\n");
            }
            else
            {
                 printf("Enter the element you want to insert\n");
                 scanf("%d",&element);
                 queue[rear]=element;
                 rear++;
            }
            break;
        }
    case 2:
        {
            if(front==rear)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Deleted %d\n",queue[front]);
                for(i=0;i<rear-1;i++)
                {
                    queue[i]=queue[i+1];
                }
                rear--;
            }
            break;
        }
    case 3:
        {
            if(front==rear)
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue elements are\n");
                for(i=front;i<rear;i++)
                {
                    printf("%d\n",queue[i]);
                }
            }
            break;
        }
    case 4:
        printf("You entered exit\n");
        break;
    default:
        printf("Please enter a valid input\n");
        break;
    }
    }while(choice!=4);
}
