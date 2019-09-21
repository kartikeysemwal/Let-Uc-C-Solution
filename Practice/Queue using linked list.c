#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
}*front=NULL,*rear=NULL;
void insert(int);
void deletee(void);
void display(void);
int main()
{
    int value,choice;
    do
    {
    printf("Enter the operation you want to perform\n1 for insertion\n2 for deletion\n3 for display\n4 for exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the element you want to insert\n");
        scanf("%d",&value);
        insert(value);
        break;
    case 2:
        deletee();
        break;
    case 3:
        display();
        break;
    case 4:
        printf("You entered exit\n");
        break;
    }
    }while(choice!=4);
}
void insert(int x)
{
    struct queue *temp;
    temp=(struct queue*)malloc(sizeof(struct queue));
    temp->data=x;
    temp->next=NULL;
    if(front==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void deletee(void)
{
    struct queue *temp;
    if(front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp=front;
        front=front->next;
        printf("%d deleted\n",temp->data);
    }
    free(temp);
}
void display(void)
{
    struct queue *temp;
    if(front==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp=front;
        for(;temp->next!=NULL;)
        {
            printf("%d--",temp->data);
            temp=temp->next;
        }
        printf("%d--NULL\n",temp->data);
    }
    free(temp);
}
