#include<stdio.h>
int main()
{
    int x,y ;
    printf("enter the x :");
    scanf("%d",&x);
    printf("enter the y :");
    scanf("%d",&y);

    double result = pow(x,y);
    printf("Result = %.2f",result);

    return 0;
}

