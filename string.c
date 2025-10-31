#include <stdio.h>

int main(void) {
    char c = 'a';
    char *s = "abc";
    printf("c=%c\t address c   :%p\n", c, &c);
    printf("s=%s\t address s   :%p\n", s, s);
    printf("s[0]=%d\t address s[0]:%p\n", s[0], &(s[0]));
    printf("s[0]=%d\t address s[1]:%p\n", s[1], &(s[1]));
    printf("s[0]=%d\t address s[2]:%p\n", s[2], &(s[2]));
    printf("s[0]=%d\t address s[3]:%p\n", s[3], &(s[3]));
}