#include <stdio.h>

int sub(int i, int j) {
    return i - j;
}

int add(int i, int j) {
    return i + j;
}

int main() {
    int i, j, result;
    int (*pf)(int, int);

    scanf("%d%d", &i, &j);

    pf = add;
    result = pf(i, j);
    printf("%d, ", result);

    pf = sub;
    result = pf(i, j);
    printf("%d", result);
}