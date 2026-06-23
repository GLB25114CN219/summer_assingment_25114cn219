#include<stdio.h>

struct salary
{
    int id;
    char name[30];
    float basic, hra, da, total;
};

int main()
{
    struct salary s[20];
    int n,i;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter ID: ");
        scanf("%d",&s[i].id);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter basic salary: ");
        scanf("%f",&s[i].basic);

        s[i].hra = s[i].basic * 0.10;
        s[i].da = s[i].basic * 0.05;
        s[i].total = s[i].basic + s[i].hra + s[i].da;
    }

    printf("\nSalary Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nID: %d",s[i].id);
        printf("\nName: %s",s[i].name);
        printf("\nTotal Salary: %.2f\n",s[i].total);
    }

    return 0;
}