#include <stdio.h>

int main(void) {
    int max_h = 23;
    int max_m = 59;
    int h, m;
    int a;

    for (h = 0; h <= max_h; h++) {
        for (m = 0; m <= max_m; m++) {
            a = h + m;
            if (a % 3 == 0) {
                printf("FIZZ");
            }
            if (a % 5 == 0) {
                printf("BUZZ");
            }
            printf("\n");
        }
    }

    return 0;
}