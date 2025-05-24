#include<stdio.h>
int main()
{
    int i, fact = 1 ,n;
    printf("please enter value n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)

    {
        fact = fact *i;
    }

    printf("result of fact = %d",fact);


    return 0;
}

