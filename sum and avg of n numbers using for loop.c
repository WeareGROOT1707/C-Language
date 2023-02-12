#include<stdio.h>

int main()
{
    int a,n;
    float avg,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter the numbers: \n");
        scanf("%d",&a);
        sum=sum+a;
        avg=sum/n;
    }
    printf("sum: %f\n",sum);
    printf("avg: %f",avg);
    return 0;
}
