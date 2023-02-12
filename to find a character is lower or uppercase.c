#include<stdio.h>

int main()
{
    char a;
    printf("enter the character:\n");
    scanf("%c",&a);
    if(a>='a'&&a<='z')
    {
        printf("It is a alphabet");
    }
    else if(a>=0&&a<=9)
    {
        printf("It is a number");
    }
    else
    {
        printf("It is a symbol");
    }
}
