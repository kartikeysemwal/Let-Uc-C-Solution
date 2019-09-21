#include<stdio.h>
#include<math.h>
unsigned long long function();
unsigned long long power(unsigned long long,unsigned long long);
unsigned long long factorial(int);
int main()
{
    int x;
    printf("Enter the value of x.\n");
    scanf("%d",&x);
    function(x);
}
unsigned long long function(int x)
{
    unsigned long long i,j,sum=0,su=0;
    unsigned long long k,l,total;
    for(i=1;i<=17;i=i+4)
    {
        k=power(x,i)/factorial(i);
        sum=sum+k;
        printf("%llu %llu %llu \n",sum,k,i);
    }
        for(j=3;j<=19;j=j+4)
    {
        l=power(x,j)/factorial(j);
        su=su+l;
        printf("%llu %llu %llu \n",su,l,j);
    }
    printf("%d",sum-su);
}
unsigned long long factorial(int x)
{
    if(x==0)
        return(1);
    if(x==1)
        return(1);
    else
        return x*factorial(x-1);
}
unsigned long long power(unsigned long long a, unsigned long long b)
{
    unsigned long long c,d;
    c=a;
    for(d=1;d<b;d++)
    {
        a=a*c;
    }
    return a;
}
