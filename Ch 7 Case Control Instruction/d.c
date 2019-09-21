#include<stdio.h>
int main()
{
    int class,sub;
    printf("Enter the class obtained by the student and the number of subjects he failed in.\n");
    scanf("%d %d",&class,&sub);
    switch(class)
    {
    case 1:
        {
            switch(sub)
        {
        case 3:
            printf("Grace is of 5 marks per subject.\n");
            break;
            case 2:
            printf("Grace is of 5 marks per subject.\n");
            break;
            case 1:
            printf("Grace is of 5 marks per subject.\n");
            break;
            default:
            printf("There is no grace marks.\n");
        break;
        }

        }
        break;
    case 2:
       {
           switch(sub)
        {
            case 2:
            printf("Grace is of 4 marks per subject.\n");
            break;
            case 1:
            printf("Grace is of 4 marks per subject.\n");
            break;
            default:
            printf("There is no grace marks.\n");
        break;
        }
       }
       break;

    case 3:
       {
         switch(sub)
        {
            case 1:
            printf("Grace is of 5 marks per subject.\n");
            break;
            default:
            printf("There is no grace marks.\n");
        break;
        }
       }
       break;
            default:
                printf("Please enter a valid value.\n");
break;
    }
}

