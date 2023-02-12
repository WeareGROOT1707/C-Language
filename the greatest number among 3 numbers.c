#include<stdio.h>

int main()
{
    char a;
    printf("Enter the character:\n");
    scanf("%c",&a);
    if(a>=97&&a<=122)
    {
        printf("the character is lowercase");
    }
    else
    {
        printf("the character is uppercase.");
    }
    return 0;
}
