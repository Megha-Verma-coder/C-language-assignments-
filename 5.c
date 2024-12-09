// WAP to find sum of all scores in Marks array.

#include <stdio.h>

int main()
{
    int sum = 0, marks[5];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    printf("%d", sum);

    return 0;
}