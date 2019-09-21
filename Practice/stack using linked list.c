#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
}*top=NULL;
void push(int);
void pop(void);
void display(void);
int main()
{
    int value,choice;
    do
    {
    printf("Enter the operation you want to perform on the stack\n1 push\n2 pop\n3 display\n4 exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the value\n");
        scanf("%d",&value);
        push(value);
        break;
    case 2:
        pop();
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
void push(int x)
{
    struct stack *temp;
    temp = (struct stack*)malloc(sizeof(struct stack));
    temp->data=x;
    if(top==NULL)
    {
        temp->next=NULL;
    }
    else
        temp->next=top;
    top=temp;
    printf("%d inserted\n",x);
}
void pop(void)
{
    struct stack *temp;
    if(top==NULL)
        printf("Stack is empty\n");
    else
        temp=top;
    printf("You deleted %d\n",temp->data);
    top=temp->next;
    free(temp);
}
void display(void)
{
    struct stack *temp;
    temp=top;
    if(top==NULL)
        printf("Stack is empty\n");
    else
    for(;temp->next!=NULL;)
    {
        printf("%d--",temp->data);
        temp=temp->next;
    }
    printf("%d--NULL\n",temp->data);
    free(temp);
}

