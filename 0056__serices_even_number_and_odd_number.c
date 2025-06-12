#include<stdio.h>
int main()
{
    int   i,  num,sum,even=0,odd=0;

    printf("enter the number : ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
      if(i%2==0)
     even = even+i;
     else
    odd= odd+i;
}

    printf("Total sum =  %d\n",odd-even);
    return 0;
}

