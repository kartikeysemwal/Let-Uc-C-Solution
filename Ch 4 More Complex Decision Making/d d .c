#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the values of the three sides of the triangle.\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b!=c||b==c&&c!=a||c==a&&c!=b)
        printf("The triangle is isosceles.\n");
    else if((pow(a,2)==pow(b,2)+pow(c,2))||(pow(b,2)==pow(a,2)+pow(c,2))||(pow(c,2)==pow(b,2)+pow(a,2)))
    printf("The triangle is right angled triangle.\n");
    else if(a==b==c)
        printf("The triangle is equilateral.\n");
    else if(a!=b!=c)
        printf("The triangle is scalene.\n");
}
