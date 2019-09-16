#include<stdio.h>
int main(int argc, char *argv[])
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '	') {
            putchar('\\');
            putchar('t');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
    return 0;
}
