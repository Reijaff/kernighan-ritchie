#include<stdio.h>
unsigned invert(unsigned x, int p, int n)
{
    unsigned a = (~(x >> (p + 1 - n) & ~(~0 << n)) & ~(~(0 << n))) << n;
    
    unsigned b = x & ~(~(~0U << n) << (p + 1 - n));
/*
    unsigned b = (y & ~(~0U << n)) << (p + 1 - n);

    return a | b;
    */
    return a | b;
}
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
int main()
{
    int x = 126,
        p = 4,
        n = 2;

    printf("%s\n", binbin(x));

    printf("%s\n", binbin(invert(x, p, n)));
    printf("%d", invert(x, p, n));

    return 0;
}
