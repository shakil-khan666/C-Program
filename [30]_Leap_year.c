#include<stdio.h>
int main()
{
    int year;
    printf("Please enter the  Year : ");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("leap year");
        }
    else if (year%4==0 && year%100!=0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
    return 0;
}
