#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the value  A : ");
    scanf("%d",&a);
    printf("enter the value  B : ");
    scanf("%d",&b);

    temp = a;
    a=b;
    b= temp;
    printf("a= %d b = %d",a,b);
    return 0;
}
