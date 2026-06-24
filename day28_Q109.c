#include <stdio.h>

int main()
{
    int choice, book=0;

    do
    {
        printf("\n--- Library Management ---");
        printf("\n1. Add Book");
        printf("\n2. Issue Book");
        printf("\n3. Return Book");
        printf("\n4. Display Books");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                book++;
                printf("Book Added");
                break;

            case 2:
                if(book>0)
                {
                    book--;
                    printf("Book Issued");
                }
                else
                    printf("No Book Available");
                break;

            case 3:
                book++;
                printf("Book Returned");
                break;

            case 4:
                printf("Total Books: %d",book);
                break;
        }

    }while(choice!=5);

    return 0;
}