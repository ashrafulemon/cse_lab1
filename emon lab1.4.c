
#include<stdio.h>
int main()
{
    int x;
    float area,circum, pi=3.1416;
    scanf("%d",&x);

    area= pi *x*x;
    circum=2*pi*x;
    printf("area=%f and circumference=%f \n",area,circum);

    return 0;
}
