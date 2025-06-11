#include<stdio.h>
int main()
{
     int ch;
    printf("Please enter the  Character : ");
    scanf("%c",&ch);
    switch(ch)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':

    case 'A':
    case 'O':
    case 'I':
    case 'E':
    case 'U':
        printf("vowel\n");
        break;

    default:
        printf("consonent\n");
        }
    return 0;
}

