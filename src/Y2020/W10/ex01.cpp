#include <stdio.h>
#define SIZE 7

int main() {
    int K = 0, J, Q, S, F, SW;
    int A[SIZE][SIZE] = { 0, };

    SW = (int)(SIZE / 2);

    for (J = 0; J < SIZE; J++) {
        if (J < SW) {
            S = J;
            F = SIZE - J;
        } else if (J == SW) {
            S = 3;
            F = 3;

            printf("%d, %d\n", S, F);
        } else {
            F = J;
            S = SIZE - J;
        }

        for (Q = S; Q < F; Q++) {
            K++;
            A[Q][J] = K;
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d", A[i][j]);
        }

        printf("\n");
    }
}