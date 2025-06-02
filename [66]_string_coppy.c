#include<stdio.h>
int main()
{
    char  str1[10],str2[10];
    gets(str1);
     gets(str2);
     strcpy(str1,str2);
     printf(" source sting : %s\n",str1);
     printf(" final sting : %s\n",str2);

 return 0;
}
