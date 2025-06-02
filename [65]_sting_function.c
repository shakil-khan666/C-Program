#include<stdio.h>
int main()
{

    char s1[10];
    printf("Enter the name please : ");
    gets(s1);
    int len= strlen(s1);
    printf(" Full Name = %s",s1);
    printf("lenth : %d",len);
    return 0;
}

