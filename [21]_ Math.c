#include<stdio.h>
#include<math.h>
int main()
{
    int number ;
    printf("enter the number :");
    scanf("%d",&number);

    double result1 = sin(number);
    double result2 = cos(number);
    double result3 = log(number);

    printf(" result1 = %.2f",result1);
    printf(" result2 = %.2f",result2);
    printf(" result3 = %.2f",result3);

    return 0;
}

