#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, C, K, Y, S[20];

    scanf("%d", &N);

    if (N <= 2) {
        exit(0);
    }

    C = -1;
    K = 2;

    while (1) {
        if (N % K == 0) {
            C++;
            S[C] = K;
            N = N / K;

            if (N == 1) {
                if (C == 0) {
                    printf("소수");
                }

                break;
            } else {
                K = 2;
            }
        } else {
            K++;
        }
    }

    for (int x = 0; x <= C; x++) {
        printf("%d %s", S[x], x == C ? "" : "x ");
    }
}