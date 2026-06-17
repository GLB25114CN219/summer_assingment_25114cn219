#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, len = 0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
    {
        len++;
        i++;
    }

    printf("Length = %d", len);

    return 0;
}