#include<stdio.h>
int main()
{
    float base,high,area;

    printf("Enter the  base : ");
    scanf("%f",&base);
    printf("Enter the  high : ");
    scanf("%f",&high);

    area = 0.5*base*high;
    printf("%f",area);

    return 0;

}
