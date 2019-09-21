#include<stdio.h>
int main()
{
    int i,j,n;
    printf("All the prime numbers from 1 to 100 are\n");
    for(i=1;i<=100;i++)
    {
    for(j=i-1;j>1;j--)
    {
     if(i%j==0)
            break;
    }
    if(j==1)
        printf("%d\n",i);
    }
}
