// WAP to read two integers and print their HCF (Highest Common Factor).

#include <stdio.h>

int main()
{
    int x, y, greater, smaller;
    printf("Enter 2 integers : ");
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        greater = x;
        smaller = y;
    }
    else if (x < y)
    {
        greater = y;
        smaller = x;
    }
    for (int i = smaller; i >=1; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            printf("HCF is %d", i);
            break;
        }   
    }

    return 0;
}