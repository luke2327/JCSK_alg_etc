#include <stdio.h>

int func (int *p) {
    printf("%d\n", *p);
    printf("%d\n", p[2]);

    return 0;
}

int main() {
    int a[7] = { 1, 2, 3, 4, 5 };
    func(a);
    func(a + 2);
}