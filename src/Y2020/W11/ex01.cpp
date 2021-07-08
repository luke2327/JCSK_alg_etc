#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FIND 77

int main() {
    srand((unsigned int)time(NULL));
    
    int GK[100], CHA, FGK;
    int N = -1;
    int COMP = 300;

    for (int i = 0; i < 100; i++) {
        GK[i] = rand() % 100;
    }

    do {
        N++;

        if (GK[N] > FIND) {
            CHA = GK[N] - FIND;
        } else {
            CHA = FIND - GK[N];
        }

        if (COMP > CHA) {
            COMP = CHA;
            FGK = GK[N];
        }
    } while (N < 99);

    printf("%d", FGK);
}