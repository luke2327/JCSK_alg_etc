#include <stdio.h>

int factorial(int n);

int main() {
    printf("%d\n", factorial(0));
    printf("%d\n", factorial(1));
    printf("%d\n", factorial(2));
    printf("%d\n", factorial(3));
    printf("%d\n", factorial(4));
    printf("%d\n", factorial(7));
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}