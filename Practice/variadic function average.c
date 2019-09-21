#include<stdio.h>
#include<stdarg.h>
int avg(int args,...)
{
    va_list ap;
    va_start(ap,args);
    int i=0,sum=0;
    for(i=0;i<args;i++)
        sum=sum+va_arg(ap,int);
    va_end(ap);
    sum=sum/args;
    return sum;
}
int main()
{
    printf("Average =%d\n",avg(3,1,2,3));
    return 0;
}
