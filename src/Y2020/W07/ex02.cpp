#include <stdio.h>
#include <unistd.h>

int recur(int i) {
    printf("%d", i);

    if (i < 1) {
        return 2;
    } else {
        return 3 * recur(i - 1) + 1;
    }
}

int main() {
    int n;

    n = recur(7);
    printf("\n");
    printf("%d", n);
}