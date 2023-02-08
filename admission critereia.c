#include<stdio.h>

int main()
{
    int m,p,c;
    printf("Enter the marks in maths:\n");
    scanf("%d",&m);
    printf("Enter the marks in physics:\n");
    scanf("%d",&p);
    printf("Enter the marks in chemistry:\n");
    scanf("%d",&c);
    if((m>=65&&p>=55&&c>=50)&&((m+c+p>=190)||(m+p>=140)))
    {
        printf("You are eligible.");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}
