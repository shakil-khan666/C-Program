#include<stdio.h>
int main()
{
    int temp,num,r,sum=0;
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        r=temp%10;
        sum = sum*10+r;
        temp = temp/10;

    }
    printf("Reverse num = %d \n\n",sum);
    if(sum==num)
    {
        printf("palindom number\n\n");
    }
    else
    {
        printf("Not Palindom");
    }
    return 0;
}
