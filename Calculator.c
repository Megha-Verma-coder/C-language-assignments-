/*Simple Calculator is a C language-based application used for
performing all the simple arithmetic operations like addition,
multiplication, division, and subtraction. The application can be
made using basic knowledge of C like if-else statements, loops,
etc.
The functionalities of the application are mentioned below:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Logarithmic values
6. Square roots
*/

#include <stdio.h>
#include <math.h>

int add(int n)
{
    int num, sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &num);
        sum += num;
    }
    return sum;
}
int sub(int n)
{
    int num, diff = 0;
    printf("Enter first number : ");
    scanf("%d", &diff);

    for (int i = 1; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &num);
        diff -= num;
    }
    return diff;
}
int mul(int n)
{
    int num, product = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &num);
        product *= num;
    }
    return product;
}
int div(int a, int b)
{

    return a / b;
}
int main()
{
    int choice, n;
    printf("Press 1 for addition, 2 for Subtraction, 3 for Multiplication, 4 for Division, 5 for Logarithmic values and 6 for Square roots : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter how many number do you want to add : ");

        scanf("%d", &n);
        printf("The sum is %d", add(n));
    }
    else if (choice == 2)
    {
        printf("Enter how many numbers do you want to subtract : ");
        scanf("%d", &n);
        printf("The diff is %d", sub(n));
    }
    else if (choice == 3)
    {
        printf("Enter how many numbers do you want to multiply : ");
        scanf("%d", &n);
        printf("The product is %d", mul(n));
    }

    else if (choice == 4)
    {
        int a, b;
        printf("Enter numbers to divide : ");
        scanf("%d%d", &a, &b);
        printf("The division is %d", div(a, b));
    }
    else if (choice == 6)
    {
        printf("Enter a number : ");
        scanf("%d", &n);
        printf("%.2f", sqrt(n));
    }

    return 0;
}