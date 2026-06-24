#include <stdio.h>

int main()
{
    int choice,ticket=10;

    do
    {
        printf("\n--- Ticket Booking ---");
        printf("\n1.Book Ticket");
        printf("\n2.Cancel Ticket");
        printf("\n3.Available Ticket");
        printf("\n4.Exit");
        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                if(ticket>0)
                {
                    ticket--;
                    printf("Ticket Booked");
                }
                else
                    printf("No Ticket");
                break;

            case 2:
                ticket++;
                printf("Ticket Cancelled");
                break;

            case 3:
                printf("Available:%d",ticket);
        }

    }while(choice!=4);

    return 0;
}