#include <stdio.h>

int main()
{
    int ch,a,b;

    do
    {
        printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit");
        printf("\nChoice:");
        scanf("%d",&ch);

        if(ch>=1 && ch<=4)
        {
            printf("Enter numbers:");
            scanf("%d%d",&a,&b);
        }

        switch(ch)
        {
            case 1: printf("%d",a+b);break;
            case 2: printf("%d",a-b);break;
            case 3: printf("%d",a*b);break;
            case 4: printf("%d",a/b);break;
        }

    }while(ch!=5);

    return 0;
}