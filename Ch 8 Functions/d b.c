#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
 int a,b,c;
 printf("Enter a number and the power raise to it.\n");
 scanf("%d %d",&a,&b);
 c=power(a,b);
 printf("The value is %d.\n",c);
}
int power(int d, int e)
{
    int f;
    f=pow(d,e);
    return(f);
}
