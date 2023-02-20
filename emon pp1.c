
#include<stdio.h>
int main()
{
    int x;
    float area,volume, pi=3.1416, h=10;
    scanf("%d",&x);

    area= 2*pi*x*h + 2*pi*x*x;
    volume = pi*x*x*h;
    printf("area=%f and volume=%f \n",area,volume);

    return 0;
}

