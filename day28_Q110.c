#include <stdio.h>

int main()
{
    int choice;
    float balance=0,amount;

    do
    {
        printf("\n--- Bank System ---");
        printf("\n1.Deposit");
        printf("\n2.Withdraw");
        printf("\n3.Check Balance");
        printf("\n4.Exit");
        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount:");
                scanf("%f",&amount);
                balance+=amount;
                break;

            case 2:
                printf("Enter amount:");
                scanf("%f",&amount);

                if(amount<=balance)
                    balance-=amount;
                else
                    printf("Insufficient Balance");
                break;

            case 3:
                printf("Balance = %.2f",balance);
                break;
        }

    }while(choice!=4);

    return 0;
}