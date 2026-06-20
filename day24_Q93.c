#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100], s2[100], temp[200];

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    if(strlen(s1) == strlen(s2))
    {
        strcpy(temp, s1);
        strcat(temp, s1);

        if(strstr(temp, s2))
            printf("Strings are rotation");
        else
            printf("Strings are not rotation");
    }
    else
        printf("Strings are not rotation");

    return 0;
}