#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of elements you want in the array.\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of the array.\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0,j=n-1;i<=n;i++,j--)
    {
        if(i==j)
        continue;
        if(arr[i]==arr[j])
        printf("The elements %d which is %d is equal to element %d which is %d.\n",i,arr[i],j,arr[j]);
    }
}
