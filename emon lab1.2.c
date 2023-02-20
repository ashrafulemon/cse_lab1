
#include<stdio.h>
int main()
{
    int C,D, temp;
    scanf("%d %d",&C,&D);
    temp= C;
    C=D;
    D=temp;
    printf("C=%d and D= %d",C,D);

    return 0;
}
