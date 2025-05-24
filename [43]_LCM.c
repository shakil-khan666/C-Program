#include<stdio.h>
int main()
{
    int num1,num2,gcd,lcm, rem ,num_1,num_2;
    printf("enter the num1 & num2 : ");
    scanf("%d %d",&num_1,&num_2);
    num1 = num_1;
    num2= num_2;

    while(num2!=0)
    {
    rem = num1%num2;
    num1= num2;
    num2= rem;
    }
    gcd = num1;
    printf("gcd = %d\n", gcd);

    lcm = (num_1*num_2)/gcd;
    printf("lcm = %d \n",lcm);
    return 0;
}
