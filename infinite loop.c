#include<stdio.h>

int main()

{
    int a,n1,n2,option;
    for(int i=1;i<=2;i--)
    {
        printf("           MENU            \n");
        printf("___________    ____________\n");
        printf("1.) ADDITION        0.)EXIT\n\n");
        printf("___________    ____________\n");
        printf("Input your choice:\n");
        scanf("%d",&option);
        if (option ==1)
        {
            printf("Enter the first number:\n");
            scanf("%d",&n1);
            printf("Enter the second number:\n");
            scanf("%d",&n2);
            int sum=0;
            sum=n1+n2;
            printf("The sum is:\n%d",sum);
        }
        else
        {
            break;
        }
    }
    return 0;
}
