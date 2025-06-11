#include<stdio.h>
int main()
{
    int number;
    printf("please enter the number  : ");
    scanf("%d",&number);
    if(number>0){printf("positive");}
    else if(number<0){printf("negative");}
    else {printf("zero");}

}
