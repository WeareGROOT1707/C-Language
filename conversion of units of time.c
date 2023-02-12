#include<stdio.h>

int main()
{
    int month=0,week=0,day;
    printf("Enter the amount of days:\n");
    scanf("%d",&day);
    month=day/30;
    day=day-30;
    week=day/7;
    day=day-7;
    printf("Conversion is:\n%d months %d weeks %d days",month,week,day);
    return 0;

}
