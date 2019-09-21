#include<stdio.h>
int swap(int *,int *);
int main()
{
    int i;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Elements of array before interchanging.\n");
    for(i=0;i<=9;i++)
        printf("%d\n",arr[i]);
    for(i=0;i<9;i=i+2)
        swap(&arr[i],&arr[i+1]);
    printf("Values after interchanging\n");
    for(i=0;i<=9;i++)
        printf("%d\n",arr[i]);
}
int swap(int *p,int *q)
{
    int i;
    i=*p;
    *p=*q;
    *q=i;
}
