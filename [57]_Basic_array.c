#include<stdio.h>
int main()
{
    int number[20],n,i;
    printf("you are what input user : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("number : %d : ",i);
      scanf("%d",&number[i]);
    }

    for(i=0;i<=n;i++)
    {
      printf("%d\n",number[i]);
    }
    return 0;
}
