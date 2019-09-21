#include<stdio.h>
#include<stdlib.h>
void insertatbeg(void);
void insertatend(void);
void insertatpos(void);
void deletefrombeg(void);
void deltefromend(void);
void deltefrompos(void);
void display(void);
int count();
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
int main()
{
    int choice,countt;
    do
    {
        printf("Enter the operation you want to perform\n1 insert at beginning\n2 insert at end\n3 insert at specified position\n4 delete from beginning\n5 delete from end\n6 delete from specified position\n7 display\n8 number of elements\n9 exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insertatbeg();
            break;
        case 2:
            insertatend();
            break;
        case 3:
            insertatpos();
            break;
        case 4:
            deletefrombeg();
            break;
        case 5:
            deletefromend();
            break;
        case 6:
            deletefrompos();
            break;
        case 7:
            display();
            break;
        case 8:
            countt=count();
            printf("The linked list contains %d elements\n",countt);
            break;
        case 9:
            printf("You entered exit\n");
            break;
        default:
            printf("Enter a valid choice\n");
        }
    }while(choice!=9);
}
void insertatbeg(void)
{
    int x;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Out of memory space\n");
        return;
    }
    printf("Enter the data you want to insert\n");
    scanf("%d",&x);
    temp->data=x;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}
void display(void)
{
    struct node* ptr;
    if(start==NULL)
    printf("List is empty\n");
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            printf("%d--",ptr->data);
            ptr=ptr->next;
        }
        printf("%d--NULL\n",ptr->data);
    }

}
void insertatend(void)
{
    int x;
    struct node * temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Out of memory space\n");
        return;
    }
    printf("Enter the value you want to insert\n");
    scanf("%d",&x);
    temp->data=x;
    temp->next=NULL;
    ptr=start;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    }
}
void insertatpos(void)
{
    int pos,n,i;
    printf("Enter the position where you want to insert the element\n");
    scanf("%d",&pos);
    n=count();
    if(pos>n||pos<0)
    {
        printf("Enter a valid position\n");
    }
    else if(pos==1)
    {
        insertatbeg();
    }
    else if(pos==n)
    {
        insertatend();
    }
    else
    {
        struct node *ptr,*temp;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter the element you want to insert\n");
        scanf("%d",&temp->data);
        ptr=start;
        for(i=1;i<pos-1;i++)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
}
void deletefrombeg(void)
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("The list is empty\n");
        return;
    }
    else if(temp->next==NULL)
    {
        start=NULL;
        printf("You deleted %d\n",temp->data);
    }
    else
    {
        start=temp->next;
        printf("You deleted %d\n",temp->data);
    }
    free(temp);
}
void deletefromend(void)
{
    struct node *temp;
    temp=start;
    if(start==NULL)
    {
        printf("List is empty\n");
    }
    else if(temp->next==NULL)
    {
        deletefrombeg();
    }
    else
    {
        int num,i;
        num=count();
        struct node *temp,*ptr;
        temp=start;
        for(i=1;i<num-1;i++)
        {
            temp=temp->next;
            ptr=temp->next;
        }
        printf("Deleted %d\n",ptr->data);
        temp->next=NULL;
    }
}
void deletefrompos(void)
{
    int num,pos;
    num=count();
    if(start==NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Enter the position from where you want to delete the element\n");
    scanf("%d",&pos);
    if(pos>num||pos<0)
    {
        printf("Enter a valid position\n");
    }
    else if(pos==1)
    {
        deletefrombeg();
    }
    else if(pos==num)
    {
        deletefromend();
    }
    else
    {
        int i;
        struct node *temp,*ptr;
        temp=start;
        for(i=1;i<pos-1;i++)
        {
            temp=temp->next;
            ptr=temp->next;
        }
        printf("You deleted %d\n",ptr->data);
        temp->next=ptr->next;
    }
}
int count()
{
    int countt=0;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(start==NULL)
    {
        return 0;
    }
    else
    {
        ptr=start;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            countt++;
        }
        return countt;
    }
}









