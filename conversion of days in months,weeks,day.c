#include<stdio.h>

int main()
{
    int a,b,c;

    printf("enter the number a:\n");
    scanf("%d",&a);
    printf("enter the number b:\n");
    scanf("%d",&b);
    printf("enter the number c:\n");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("the greatest number is:\n%d",a);
        }
        else
        {
            printf("the greatest number is:\n%d",c);
        }
        if(b>c)
        {
            printf("the greatest number is:\n%d",b);
        }
        }
    else
    {

    }
    return 0;
}
