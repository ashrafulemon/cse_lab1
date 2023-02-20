#include<stdio.h>
int main()
{
    int x,y,sum;
    scanf("%d",&x);

    y= x%10;
    sum=y;
    printf("%d",y);

    y= (x/10)%10;
    sum=sum+y;
    printf("%d",y);

    y= x/100;
    sum=sum+y;
    printf("%d\n",y);
    printf("sum= %d",sum);

    return 0;
}
