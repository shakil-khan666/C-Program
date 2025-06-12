#include<stdio.h>
int main()
{
    int number[20],n,i,sum=0;
    printf("you are what input user : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("number : %d : ",i);
      scanf("%d",&number[i]);
    }

    for(i=0;i<n;i++)
    {
      sum= sum+number[i];
    }
    printf("sum =%d",sum);
    return 0;
}

