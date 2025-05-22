#include<stdio.h>
int main()
{
    int number ;
    printf("enter the number :");
    scanf("%d",&number);

    double result = sqrt(number);
    printf(" root = %.2f",result);

    return 0;
}
