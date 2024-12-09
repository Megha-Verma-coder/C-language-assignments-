//WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)

#include <stdio.h>

int subtract(int a, int b) {
    while (b != 0) {
        int borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1 = 15, num2 = 10;
    printf("Result: %d\n", subtract(num1, num2));
    return 0;
}
