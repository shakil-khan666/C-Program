#include<stdio.h>
int main()
{
    float  i=1.5,num;
    float sum=0;
    printf("enter the number : ");
    scanf("%f",&num);
    while(i<=num)
    {
        sum = sum+i;
        i++;
    }
    printf("Total sum =  %.2f\n",sum);
    return 0;
}
