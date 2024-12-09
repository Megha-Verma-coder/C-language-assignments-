// WAP to find a peak element which is not smaller than its neighbors.

#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    int peak = marks[0];
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > peak)
        {
            peak = marks[i];
        }
    }
    printf("%d", peak);

    return 0;
}