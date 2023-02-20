

#include<stdio.h>
int main()
{
    int x;
    float area,volume, pi=3.1416;
    scanf("%d",&x);

    area=  4*pi*x*x;
    volume = (4*pi*x*x*x)/3;
    printf("area=%f and volume=%f \n",area,volume);

    return 0;
}

