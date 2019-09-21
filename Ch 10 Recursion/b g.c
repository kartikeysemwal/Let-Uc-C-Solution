#include<stdio.h>
int factors(int);
int main()
{
    int n;
    printf("Enter a number to obtain its prime factors.\n");
    scanf("%d",&n);
    factors(n);
    return 0;
}
int factors(int n)
{
    int i;
    if(n==0)
    {
    printf("No prime factors.\n");
    return;
    }
    if(n==1)
    {
        printf("1\n");
        return;
    }
     else
        {
            for(i=2;i<=n;i++)
                if(n%i==0)
            {
                printf("%d  ",i);
                factors(n/i);
                return;
            }
        }
}
