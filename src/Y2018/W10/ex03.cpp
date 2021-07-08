#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int GK[100], CHA, FGK, N, COMP;

    srand((unsigned int)time(NULL));

    for (int i = 0; i <= 99; i++) {
        GK[i] = rand() % 100;
    }

    N = -1;
    COMP = 300;

    while (1) {
        N++;

        if (GK[N] > 77) {
            CHA = GK[N] - 77;
        } else {
            CHA = 77 - GK[N];
        }

        if (COMP > CHA) {
            COMP = CHA;
            FGK = GK[N];
        }

        if (N >= 99) {
            break;
        }
    }

    printf("%d", FGK);
}