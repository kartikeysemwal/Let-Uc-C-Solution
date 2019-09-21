#include<stdio.h>
float average(float arr[]);
int main()
{
    float avg;
    float arr[5]={1,2,3,4,5};
    avg=average(arr);
    printf("The sum of the elements of array is %f.\n",avg);
    return 0;
}
float average(float arr[])
{
    int i;
    float sum=0,avg;
    for(i=0;i<5;i++)
        sum=sum+arr[i];
    return sum;
}
