
#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float a,n=10, r=8.75;
    scanf("%d",&x);
    a = x* pow(1+(r/100),n);
    printf("fixed deposit C.R. =%f \n",a);

    return 0;
}
