#include<stdio.h>
void modify(int*,int);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    modify(&arr,10);
    printf("The new array elements are \n");
    for(i=0;i<10;i++)
        printf("%d\n",arr[i]);
}
void modify(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        *p=*p * 3;
        p++;
    }
}
