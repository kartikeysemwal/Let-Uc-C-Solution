#include<stdio.h>
float average(float arr[], int);
int main()
{
    int n,i;
    printf("Enter the number of elements in the array.\n");
    scanf("%d",&n);
    float arr[n],avg;
    printf("Enter the elements of the array.\n");
    for(i=0;i<n;i++)
        scanf("%f",&arr[i]);
    avg=average(arr,n);
    printf("The average of the elements is %f.\n",avg);
}
float average(float arr[], int n)
{
    int i;
    float avg,sum=0;
    for(i=0;i<n;i++)
    sum=sum+arr[i];
    avg=sum/n;
    return avg;
}
