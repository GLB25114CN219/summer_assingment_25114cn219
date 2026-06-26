#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

void add(struct Student s[], int *n)
{
    printf("Enter Roll: \n");
    scanf("%d",&s[*n].roll);

    printf("Enter Name:\n ");
    scanf("%s",s[*n].name);

    printf("Enter Marks:\n ");
    scanf("%f",&s[*n].marks);

    (*n)++;
}

void display(struct Student s[], int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\n%d %s %.2f",
        s[i].roll,
        s[i].name,
        s[i].marks);
    }
}

void search(struct Student s[], int n)
{
    int r,i;

    printf("Enter roll: ");
    scanf("%d",&r);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==r)
        {
            printf("Found: %s %.2f",
            s[i].name,s[i].marks);
            return;
        }
    }

    printf("Not Found");
}

int main()
{
    struct Student s[100];
    int n=0,choice;

    while(1)
    {
        printf("\n\n1.Add");
        printf("\n2.Display");
        printf("\n3.Search");
        printf("\n4.Exit");

        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:add(s,&n);break;
            case 2:display(s,n);break;
            case 3:search(s,n);break;
            case 4:return 0;
        }
    }
}