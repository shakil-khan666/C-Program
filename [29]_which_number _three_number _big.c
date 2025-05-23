#include <stdio.h>
int main() {
    int num1, num2, num3;

    printf("first number: ");
    scanf("%d", &num1);

    printf("second number :  ");
    scanf("%d", &num2);

    printf("number 3 : ");
    scanf("%d", &num3);


    if (num1 >= num2 && num1 >= num3) {
        printf("num1 %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("num2 %d\n", num2);
    } else {
        printf("num 3 %d\n", num3);
    }

    return 0;
}

