// WAP to accept two integer numbers and swap them using 4 different methods in C language.

#include <stdio.h>
void method1(int a, int b)
{
    b = a + b;
    a = b - a;
    b = b - a;
    printf("%d %d", a, b);
}
void method2(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
}
void method3(int *a, int *b)
{
    *b = *b + *a;
    *a = *b - *a;
    *b = *b - *a;
    printf("%d %d", *a, *b);
}
int main()
{
    int x, y, temp;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &x, &y);
    printf("%d %d\n", x, y);

    // method1(x, y);
    // method2(x, y);
    // method3(&x, &y);

    return 0;
}