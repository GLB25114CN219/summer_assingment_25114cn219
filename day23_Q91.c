#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,j,flag=1;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    if(strlen(a)!=strlen(b))
    {
        printf("Not Anagram");
        return 0;
    }

    for(i=0; a[i]!='\0'; i++)
    {
        for(j=0; b[j]!='\0'; j++)
        {
            if(a[i]==b[j])
            {
                b[j]='0';
                break;
            }
        }

        if(j==strlen(b))
        {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Anagram String");
    else
        printf("Not Anagram");

    return 0;
}