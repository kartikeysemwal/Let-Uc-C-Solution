#include<stdio.h>
int main()
{
    int arr[10],array[10];
    int i,j,c;
    printf("Enter the numbers of the array.\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=9,j=0;i>=0||j<10;i--,j++)
    {
            array[j]=arr[i];
    }
    for(j=0;j<10;j++)
        printf("%d\n",array[j]);

}
