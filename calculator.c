#include <stdio.h>

/* simple calculator */

int main()
{
    double num1;
    double num2;

    printf("Enter an first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an first number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1 + num2);

    return 0;
}
