#include<stdio.h>
#include<math.h>
int main()
{
    int i,  num,sum=0;
   printf("enter the number : ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        sum =sum+ pow(i,i);

    }
    printf("Total sum =  %d\n",sum);
    return 0;
}

