//WAP to check whether a given is Armstrong or not.

#include <stdio.h>
int amstrong(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int rem = n % 10;
        return (rem * rem * rem) + amstrong(n / 10);
    }
}
int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int arm = amstrong(n);
    if (n == arm)
    {
        printf("Amstrong Number");
    }

    else
    {
        printf("Not Amstrong Number");
    }
    return 0;
}