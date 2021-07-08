#include <stdio.h>

int sub(int i, int j) {
    return i - j;
}

int add(int i, int j) {
    return i + j;
}

int main() {
    int a = 12, b = 3;
    int (*pf)(int, int);

    pf = add;
    printf("%d\n", add(a, b));

    pf = sub;
    printf("%d", sub(a, b));
}