#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf("Enter the number up to which you want to check.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if((i%3==0)&&(i%5==0))
        {
            printf("%d\n",i);
            j=j+1;
        }
        else
            continue;
    }
    if(j==0)
        printf("There is no number which is divisible by 3 and 5.\n");
}
