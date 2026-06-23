#include<stdio.h>

struct marksheet
{
    int roll;
    char name[30];
    int m1,m2,m3;
    int total;
    float per;
};

int main()
{
    struct marksheet s;

    printf("Enter roll number: ");
    scanf("%d",&s.roll);

    printf("Enter name: ");
    scanf("%s",s.name);

    printf("Enter marks of 3 subjects: ");
    scanf("%d%d%d",&s.m1,&s.m2,&s.m3);

    s.total=s.m1+s.m2+s.m3;
    s.per=s.total/3.0;

    printf("\n----- Marksheet -----");
    printf("\nRoll: %d",s.roll);
    printf("\nName: %s",s.name);
    printf("\nTotal Marks: %d",s.total);
    printf("\nPercentage: %.2f",s.per);

    if(s.per>=40)
        printf("\nResult: Pass");
    else
        printf("\nResult: Fail");

    return 0;
}