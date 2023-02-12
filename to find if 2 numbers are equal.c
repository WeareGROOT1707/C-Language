#include<stdio.h>

int main()
{
    int a;
    printf("Enter the height of the person:\n");
    scanf("%d",&a);
    if(a<140)
    {
        printf("Dwarf");
    }
    else if(a>=140 && a<=150)
    {
        printf("Below Average");
    }
    else if(a>=150 && a<=160)
    {
        printf("Average");
    }
    else if(a>=160 && a<=170)
    {
        printf("Above Average");
    }
    else
    {
        printf("Tall");
    }
    return 0;
}
