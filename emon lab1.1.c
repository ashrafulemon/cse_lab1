#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("addition       = %d\n",x+y);
    printf("subtraction    = %d\n",x-y);
    printf("division       = %f\n",(float)x/y);
    printf("multiplication = %d\n",x*y);
    printf("modulus        = %d\n",x%y);
    return 0;
}
