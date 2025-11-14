#include <stdio.h>

int main(void) {
    int P;
    char r;
    scanf("%c %d", &r, &P);

    int point;
    switch (r) {
        case 'r':
            point = P * 0.01;
            break;
        case 's':
            point = P * 0.015;
            break;
        case 'g':
        // default:
            point = P * 0.02;
            break;
    }

    printf("%d", point);
    return 0;
}
