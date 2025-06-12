#include<stdio.h>
int main()
{
    int a[10][20],b[10][20],i,j,r,c,sum[10][20],transpose[10][10];
    printf("enter the matrix row and colum : ");
    scanf("%d%d",&r,&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
printf("Matrix A : \n");
 for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
}
// working matrix b

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
printf("Matrix B : \n");
 for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
}
// sum Martix

 for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[j][i];
        }
        printf("\n");
}
printf(" sum Martix : \n");
 for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
}

for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[i][j]= a[j][i];
        }
        printf("\n");
}
for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
}








 return 0;
}
