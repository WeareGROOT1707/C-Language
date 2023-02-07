#include<stdio.h>

int main()
{
    int x,y;
    printf("X coordinate:\n");
    scanf("%d",&x);
    printf("Y coordinate:\n");
    scanf("%d",&y);
    if(x>0&&y>0)
    {
        printf("First Quadrant");
    }
    else if(x<0&&y>0)
    {
        printf("Second Quadrant");
    }
    else if(x<0&&y<0)
    {
        printf("Third Quadrant");
    }
    else if(x>0&&y<0)
    {
        printf("Fourth Quadrant");
    }
    else
    {
        printf("not possible");
    }
    return 0;
}
