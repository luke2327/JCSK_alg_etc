#include <stdio.h>

int recursive(int n);

int main() {
    int i;

    scanf("%d", &i);
    
    recursive(i);
}

int recursive(int n) {
    int i;

    if (n < 1) {
        return 2;
    } else {
        i = (2 * recursive(n - 1)) + 1;

        printf("n = %d ", i);
        
        return i;
    }
}