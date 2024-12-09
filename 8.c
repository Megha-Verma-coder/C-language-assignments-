/*WAP to print below mentioned pattern:
1
01
101
0101
10101*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many lines do you want ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((j + i) % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}