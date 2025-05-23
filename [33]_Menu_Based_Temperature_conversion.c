#include<stdio.h>
int main()
{
    int choice;
    printf("\nMenu Based Temperature conversion\n");
    printf("\n1.Farenheit to celsius\n ");
    printf("\n2.Celsius to Farenheit\n");
    printf("\n2.Enter the choice : \n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:

        {
    int C,F;
    printf("Enter the Fahrenheit : ");
    scanf("%d",&F);
    C = (F-32)/1.8;

    printf("Centigrade= %d : ",C);
        }
        break ;
    case 2:

        {
            int C,F;
    printf("Enter the Centigrade : ");
    scanf("%d",&C);
    F = (1.8*C)+32;

    printf("Fahrenheit= %d : ",F);
        }

    }
    return 0;
}
