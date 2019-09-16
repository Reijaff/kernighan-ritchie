#include <stdio.h>

int main(void)
{
    int c;
    int n;  /* если ни один из нужных */

    while ((c = getchar()) != EOF) {
        n = 0;

        if (c == '\t') {
            printf("\\t");
            n = 1;
        }

        if (c == '\b') {
            printf("\\b");
            n = 1;
        }

        if (c == '\\') {
            printf("\\\\");
            n = 1;
        }

        if (n != 1)
            putchar(c);
    }

    return 0;
}
