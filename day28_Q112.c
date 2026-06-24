#include <stdio.h>

int main()
{
    char name[50],phone[20];
    int choice;

    do
    {
        printf("\n1.Add Contact");
        printf("\n2.View Contact");
        printf("\n3.Exit");
        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Name:");
                scanf("%s",name);
                printf("Enter Phone:");
                scanf("%s",phone);
                break;

            case 2:
                printf("Name:%s Phone:%s",name,phone);
                break;
        }

    }while(choice!=3);

    return 0;
}