#include<stdio.h>
void binary(int);
int main()
{
    int num;
    printf("Enter a number to find its binary equivalent.\n");
    scanf("%d",&num);
    binary(num);
}
void binary(int num)
{
    static int i,j;
    if(i==1)
    {
        printf("1");
        return;
    }
    else
    {
        i=num/2;
        j=num%2;
        printf("%d",j);
        binary(i);
    }

}
