#include <stdio.h>

int main(void){
    int a = 0;

    if (a = 1) {
        printf("T %d\n", a);
    } else {
        printf("F %d\n", a);
    }

    if (a = 0) {
        printf("T %d\n", a);
    } else {
        printf("F %d\n", a);
    }

    int* b = NULL;
    if (b = &a) {
        printf("T %p\n", b);
    } else {
        printf("F %p\n", b);
    }

    if (b = NULL) {
        printf("T %p\n", b);
    } else {
        printf("F %p\n", b);
    }

    return 0;
}
