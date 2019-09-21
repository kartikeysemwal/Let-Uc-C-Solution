#include<stdio.h>
int main()
{
    int i,j=0,n,search;
    printf("Enter the number of elements in the array.\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter the elements of the array.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the element you want to search.\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==array[i])
        {
            printf("The element is in position %d.\n",i+1);
            j=j+1;

        }
        else
            continue;
    }
    if(j==0)
    printf("The element %d was not present in the array.\n",search);


}
