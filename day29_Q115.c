#include <stdio.h>
#include <string.h>

int main()
{
    char s[50];
    int ch;

    printf("Enter string:");
    gets(s);

    do
    {
        printf("\n1.Length");
        printf("\n2.Reverse");
        printf("\n3.Exit");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("%d",strlen(s));
                break;

            case 2:
                strrev(s);
                printf("%s",s);
                break;
        }

    }while(ch!=3);

    return 0;
}