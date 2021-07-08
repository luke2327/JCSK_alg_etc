#include <stdio.h>

int main() {
    int n, i = 1;

    scanf("%d", &n);

    while (i < 10) {
        printf("%dX%d=%d\n", n, i, n * i);

        i++;
    }
}