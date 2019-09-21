#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    do
    {
    printf("Enter the operation you want to perform\n 1 for factorial of a number\n 2 for prime or not prime\n 3 for odd or even\n 4 for Exit\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        {
            int num,b,a;
            printf("Enter the number to find its factorial.\n");
            scanf("%d",&num);
            a=num;
            for(b=num-1;b>1;b--)
            {
                a=a*b;
            }
            printf("The factorial of %d is %d.\n",num,a);
            break;

        }
    case 2:
        {
            int a,b;
            printf("Enter any number to find it is prime or not.\n");
            scanf("%d",&a);
            for(b=2;b<a;b++)
            {
                if(a%b==0)
                {
                    printf("The number is not prime.\n");
                    break;
                }
            }
            if(b==a)
               printf("The number entered is prime.\n");
               break;
        }
    case 3:
        {
            int a;
            printf("Enter any number.\n");
            scanf("%d",&a);
            if(a%2==0)
                printf("The number is even.");
                else
                    printf("The number is odd.\n");
                break;
        }
    case 4:
        printf("You entered for exit.\n");
    default:
        printf("Please enter a valid expression.\n");

    }
    }while(a!=4);
}
