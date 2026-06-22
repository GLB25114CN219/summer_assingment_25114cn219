#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("1. C language is developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne\n");
    scanf("%d",&ans);

    if(ans == 1)
        score++;

    printf("\n2. Which is a loop?\n");
    printf("1. if\n2. for\n3. switch\n");
    scanf("%d",&ans);

    if(ans == 2)
        score++;

    printf("\n3. C file extension is?\n");
    printf("1. .java\n2. .py\n3. .c\n");
    scanf("%d",&ans);

    if(ans == 3)
        score++;

    printf("\nYour Score = %d/3", score);

    return 0;
}