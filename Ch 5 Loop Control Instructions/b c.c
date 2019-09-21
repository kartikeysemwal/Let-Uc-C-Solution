#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter any number and the power to which it is raised.\n");
    scanf("%d %d",&a,&b);
    c=pow(a,b);
    printf("The answer of %d raised to the power of %d is %d",a,b,c);
    return 0;
}
