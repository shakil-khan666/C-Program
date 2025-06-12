
#include<stdio.h>
int main()
{
    float  i,  num,sum=0;

    printf("enter the number : ");
    scanf("%f",&num);
    for (i=1;i<=num;i++)
    {
        sum = sum+i*i;

    }
    printf("Total sum =  %.2f\n",sum);
    return 0;
}
