#include<stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        if(2*n-1!=0)
        {
            sum=sum+i;
            printf("%d\n",i);
        }
    }
    printf("The sum %d",sum);
    return 0;
}

