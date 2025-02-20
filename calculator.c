#include <stdio.h>

/* calculator; */

void divisionRemainder()
{
    int firstNumber;
    int secondNumber;

    printf("\n\tEnter first number; ");
    scanf("%d", &firstNumber);

    printf("\n\tEnter second number; ");
    scanf("%d", &secondNumber);

    int qual = firstNumber % secondNumber;

    printf("\n\tAnswer: %d", qual);
}

void division()
{
    float firstNumber;
    float secondNumber;

    printf("\n\tEnter first number; ");
    scanf("%f", &firstNumber);

    printf("\n\tEnter second number; ");
    scanf("%f", &secondNumber);

    float qual = firstNumber / secondNumber;

    printf("\n\tAnswer: %.2f", qual);
}


void multiply()
{
    int firstNumber;
    int secondNumber;

    printf("\n\tEnter first number; ");
    scanf("%d", &firstNumber);

    printf("\n\tEnter seond number; ");
    scanf("%d", &secondNumber);

    int qual = firstNumber * secondNumber;

    printf("\n\tAnswer: %d", qual);
}


void subtraction()
{
    int firstNumber;
    int secondNumber;

    printf("\n\tEnter first number; ");
    scanf("%d", &firstNumber);

    printf("\n\tEnter second number; ");
    scanf("%d", &secondNumber);

    int qual = firstNumber - secondNumber;

    printf("\n\tAsnwer: %d", qual);
}


void pules()
{
    int firstNumber;
    int secondNumber;

    printf("\n\tEnter first number; ");
    scanf("%d", &firstNumber);

    printf("\n\tEnter secondNumber; ");
    scanf("%d", &secondNumber);

    int qual = firstNumber + secondNumber;
    
    printf("\n\tAnswer: %d", qual);
}

int main()
{
    char operator;

    printf("\n\tcalculator");
    printf("\n\t+\n\t-\n\t*\n\t/\n\t%%\n");
    printf("\tEnter operator: ");

    scanf(" %c", &operator);

    if (operator == '+')
    {
        pules();
    }
    else if (operator == '-')
    {
        subtraction();
    }
    else if (operator == '*')
    {
        multiply();
    }
    else if (operator == '/')
    {
        division();
    }
    else if (operator == '%')
    {
        divisionRemainder();
    }
}
