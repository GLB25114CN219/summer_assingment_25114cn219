#include <stdio.h>

int main()
{
    int a[10], i;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}