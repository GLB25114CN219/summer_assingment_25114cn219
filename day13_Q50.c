#include <stdio.h>

int main()
{
    int a[10], i, sum = 0;
    float avg;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / 10;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}