#include<stdio.h>
#include<math.h>
void function(int,int,int,int,int,float *,float *,float *);
int main()
{
    int a,b,c,d,e;
    float sum,average,sd;
    printf("Enter the values of the five numbers.\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    function(a,b,c,d,e,&sum,&average,&sd);
    printf("The sum numbers is %f\n average of numbers is %f\n standard deviation of numbers is %f.\n",sum,average,sd);
}
void function(int a,int b,int c,int d,int e,float *sum,float *average,float *sd)
{
    float su,av,s,f,g,h,i,j,mean;
    su=a+b+c+d+e;
    *sum=su;
    av=(a+b+c+d+e)/5;
    *average=av;
    f=a-av;
    g=b-av;
    h=c-av;
    i=d-av;
    j=e-av;
    f=pow(f,2);
    g=pow(g,2);
    h=pow(h,2);
    i=pow(i,2);
    j=pow(j,2);
    mean=f+g+h+i+j;
    s=sqrt(mean);
    *sd=s;



}
