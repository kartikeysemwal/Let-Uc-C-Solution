#include<stdio.h>
int main()
{
    int a=1;
    float d=1,sum=0,n,first;
    for(a=1;a<=7;a++)
    {
        n=a;
        d=a*d;
        first=n/d;
        sum=sum+first;

    }
    if(a==8)
        printf("%f",sum);
}
