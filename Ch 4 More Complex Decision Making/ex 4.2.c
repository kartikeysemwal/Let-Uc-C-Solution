#include<stdio.h>
int main()
{
    int age;
    char sex, mar, u;
    printf("Enter your marital status.\n");
    scanf("%c",&mar);
    if(mar=='m')
       {
           printf("You are selected for the post of a driver.\n");
       }
       else
       printf("Enter your age and sex.\n");
        scanf("%d   %c",&age,&sex);
            {
                if(sex=='m'&&age>30)
                printf("You are selected for the job.\n");

            else if(sex=='f'&&age>25)
                printf("You are selected for the job.\n");
            else
                printf("Please try again when you are eligible.\n");
            }
    }

