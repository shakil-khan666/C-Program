#include<stdio.h>
int main()
{
    float  i,  num,mul=1;

    printf("enter the number : ");
    scanf("%f",&num);
    for (i=1;i<=num;i++)
    {
        mul = mul*i*i;

    }
    printf("Total sum =  %.2f\n",mul);
    return 0;
}
