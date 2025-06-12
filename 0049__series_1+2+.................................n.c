#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Please Enter the number :  ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum = sum+i;
    }
    printf(" sum =  %d\n", sum);

    getch();
}
