#include <stdio.h>

int main(void) {
    int n = 0;
    double s = 0;
    int i = 0;
    while (1) {
        s += n;
        scanf("%d", &n);
        if (n < 0) {
            break;
        }
        i++;
    }
    if (i == 0) {
        puts("no data");
    } else {
        printf("%lf, %lf\n", s, s / i);
    }

    return 0;
}
