#include<stdio.h>
int main()
{
    int number_1,number_2,remainder,gcd,n1,n2,lcm;
    printf("Please Enter the number_1 : ");
    scanf("%d",&number_1);
    printf("Please Enter the number_1 : ");
    scanf("%d",&number_2);

    n1= number_1;// lcm ber korte hole obossoi onno te number rakha
    n2= number_2;
    while(n2!=0)
    {
        remainder = n1%n2;
        n1 = n2;
        n2 = remainder;
    }
    gcd = n1;
    printf(" GCD = %d ",gcd);

     lcm = (number_1*number_2)/gcd;
    printf("lcm = %d \n",lcm);
    return 0;
}
