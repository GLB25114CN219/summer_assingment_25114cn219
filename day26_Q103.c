#include <stdio.h>

int main()
{
    int pin, choice;
    float balance = 5000, amount;

    printf("Enter PIN: ");
    scanf("%d",&pin);

    if(pin == 1234)
    {
        printf("\n1. Check Balance");
        printf("\n2. Withdraw Money");
        printf("\n3. Deposit Money");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Balance = %.2f", balance);
                break;

            case 2:
                printf("Enter amount: ");
                scanf("%f",&amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdraw successful");
                    printf("\nRemaining balance = %.2f", balance);
                }
                else
                    printf("Insufficient balance");
                break;

            case 3:
                printf("Enter amount: ");
                scanf("%f",&amount);
                balance += amount;
                printf("Deposit successful");
                printf("\nBalance = %.2f", balance);
                break;

            default:
                printf("Invalid choice");
        }
    }
    else
        printf("Wrong PIN");

    return 0;
}