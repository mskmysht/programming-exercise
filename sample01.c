#include <stdio.h>

enum Hoge {
    Foo = 'a',
    Bar = 'b',
};

int main(void) {
    enum Hoge hoge = Foo;
    int fuga = 'a';

    printf("%c, %ld\n", hoge, sizeof(hoge));
    printf("%c, %d\n", fuga, fuga);

    return 0;
}