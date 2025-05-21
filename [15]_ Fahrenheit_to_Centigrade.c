#include<stdio.h>
int main()
{

    int C,F;
    printf("Enter the Fahrenheit : ");
    scanf("%d",&F);
    C = (F-32)/1.8;

    printf("Centigrade= %d : ",C);

    return 0;
}

