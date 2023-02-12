#include<stdio.h>

int main()
{
    int age ;
    printf("Input the age:\n");
    scanf("%d",&age);
    if(age<18)
    {
        printf("Not Eligible");
    }
    else
    {
        if(age>=18&&age<=50)
        {
            printf("Eligible");
        }
        else
        {
            printf("Not Eligible");
        }
    }
    return 0;
}
