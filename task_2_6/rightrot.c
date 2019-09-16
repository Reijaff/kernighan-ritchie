#include<stdio.h>

char *binbin(int n)
{
    static char bin[9];
    int x;
    for (x = 0; x < 8; x++) {
        bin[x] = n & 0x80 ? '1' : '0';
        n <<= 1;
    }
    bin[x] = '\0';
    return (bin);
}
unsigned rightrot(unsigned x, int n)
{
    while (n) {
        x = x >> 1 | (x & ~(~0 << 1)) << 7;
        n--;
    }
    return x;
    /*
    unsigned a = (~(x >> (p + 1 - n) & ~(~0 << n)) & ~(~(0 << n))) << n;

    unsigned b = x & ~(~(~0U << n) << (p + 1 - n));

        unsigned b = (y & ~(~0U << n)) << (p + 1 - n);

        return a | b;
        */
}
int main()
{
    int x = 6,
        n = 6;

    printf("%s\n", binbin(x));

    printf("%s\n", binbin(rightrot(x, n)));
    printf("%d", rightrot(x, n));

    return 0;
}
