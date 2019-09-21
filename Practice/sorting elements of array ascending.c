#include<stdio.h>
int main()
{
    int arr[5],i,j,k;
    printf("Enter the elements of the array.\n");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
    {
        if(arr[i]>arr[j])
        {
            k=arr[i];
            arr[i]=arr[j];
            arr[j]=k;
        }
    }
    printf("The elements in the ascending order are\n");
    for(i=0;i<5;i++)
        printf("%d\n",arr[i]);
}
