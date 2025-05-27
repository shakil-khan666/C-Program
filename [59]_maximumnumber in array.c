#include<stdio.h>
int main()
{
    int number[20],n,i,maximum,minimum;
    printf("you are what input user : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        printf("number : %d : ",i);
      scanf("%d",&number[i]);
    }

   maximum=number[0];

   minimum=number[0];

    for(i=0;i<=n;i++)
    {
        if(maximum<number[i])
        {
            maximum=number[i];
        }
         if(minimum>number[i])
        {
            minimum=number[i];
        }

    }
    printf(" Maximum =  %d ",maximum);
    printf(" Minimum =  %d ",minimum);

    return 0;
}

