#include <stdio.h>

int main()
{
    int choice,qty=0;

    do
    {
        printf("\n--- Inventory ---");
        printf("\n1.Add Product");
        printf("\n2.Sell Product");
        printf("\n3.Show Stock");
        printf("\n4.Exit");
        printf("\nChoice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                qty++;
                printf("Product Added");
                break;

            case 2:
                if(qty>0)
                {
                    qty--;
                    printf("Product Sold");
                }
                else
                    printf("Out of Stock");
                break;

            case 3:
                printf("Stock=%d",qty);
        }

    }while(choice!=4);

    return 0;
}