#include<stdio.h>
int main()
{
    int a[10][20],b[4][5],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]  = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    // printaA
 printf("Martix A = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
       printf("%d ",a[i][j]);
        }
        printf("\n");
    }

   // printf(" Martix B : ")


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("b[%d][%d]  = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    // printaB
 printf("Martix B =\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
       printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    return 0;
}
