#include<stdio.h>

int main()
{
    int a, hr=0,min=0;
    printf("Enter the amount of minutes:\n");
    scanf("%d",&a);
    hr=a/60;
    min=a%60;
    printf("Conversion is:\n%dhours %dminutes",hr,min);
    return 0;

}
