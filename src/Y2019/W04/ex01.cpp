#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand((unsigned int)time(NULL));

    int lic[50], toe[50], gun[50], sum[50];
    int RANK = 0;

    for (int i = 0; i <= 49; i++) {
        lic[i] = rand() % 100;
        toe[i] = rand() % 100;
        gun[i] = rand() % 100;

        sum[i] = lic[i] + toe[i] + gun[i];
    }

    for (int k = 0; k <= 49; k++) {
        if (sum[k] != 0) {
            RANK = 1;

            for (int h = 0; h <= 49; h++) {
                if (sum[k] < sum[h])
                    RANK++;
            }

            printf("k = %d, sum(k) = %d, RANK = %d\n", k, sum[k], RANK);
        }
            
    }
}