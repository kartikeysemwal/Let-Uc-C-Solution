#include<stdio.h>
int circular(int*,int*,int*);
int main()
{
    int a,b,c;
    printf("Enter the values of the numbers.\n");
    scanf("%d %d %d",&a,&b,&c);
    circular(&a,&b,&c);
    printf("The values are x=%d y=%d z=%d\n",a,b,c);
}
int circular(int *x,int *y, int *z)
{
    int u;
    u=*x;
    *x=*z;
    *z=*y;
    *y=u;
}
