#include <stdio.h>

long int factorial(int n)
{
    long int fact = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %ld", factorial(n));

    return 0;
}