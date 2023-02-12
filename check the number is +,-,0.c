#include<stdio.h>

int main()
{
    int a;
    printf("enter the age: ");
    scanf("%d",&a);
    if (0<=a)
    {
        printf("infant");
    }
    else if (a>18)
    {
        printf("adult");
    }
    else
    {
        printf("infant");
    }
}
