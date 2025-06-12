#include<stdio.h>
int main()
{
    int i,n, sum=0;
    printf("please enter the number : ");
    scanf("%d",&n);
    printf("1+2+3+......... + %d  : ",n);
    while(i<=n)
    {
        sum= sum+i;
        i++;
    }
    printf(" Total sum = %d",sum);
    getch();

}
