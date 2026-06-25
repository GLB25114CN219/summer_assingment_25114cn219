#include <stdio.h>

int main()
{
    int a[50],n,i,ch,sum;

    printf("Enter size:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    do
    {
        printf("\n1.Display");
        printf("\n2.Sum");
        printf("\n3.Reverse");
        printf("\n4.Exit");
        printf("\nChoice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                for(i=0;i<n;i++)
                    printf("%d ",a[i]);
                break;

            case 2:
                sum=0;
                for(i=0;i<n;i++)
                    sum+=a[i];
                printf("Sum=%d",sum);
                break;

            case 3:
                for(i=n-1;i>=0;i--)
                    printf("%d ",a[i]);
        }

    }while(ch!=4);

    return 0;
}