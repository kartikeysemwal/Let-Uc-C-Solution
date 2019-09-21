#include<stdio.h>
int main()
{
    int a, count,op;
    for(count=1;count<=10;count++)
    {
        printf("Enter the total hours of work to calculate your overtime pay.\n");
        scanf("%d",&a);
        if(a>40)
        {
            op=(a-40)*12;
            printf("Your overtime pay is %d\n",op);
        }
        else
            printf("You are not eligible for overtime pay.\n");
    }
    return 0;
}
