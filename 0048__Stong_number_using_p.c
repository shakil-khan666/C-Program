#include<stdio.h>
int main()
{
    int num,temp,r, sum=0,fact ,i;
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        r=temp%10;
        for(i=0;i<r;i++)
        {
            fact= fact*i;
        }
        sum = sum+fact;
        temp= temp/10;

    }
    if(num == sum)
    {
        printf("Stong Number");
    }
    else {printf("Week number");}
    return 0;
}
