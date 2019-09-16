#include<stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned a = x & ~(~(~0U << n) << (p + 1 - n));

    unsigned b = (y & ~(~0U << n)) << (p + 1 - n);

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
        y = 57;
    printf("%s\n", binbin(x));
    printf("%s\n", binbin(y));

    printf("%s\n", binbin(setbits(x, 4, 3, y)));
    printf("%d", setbits(x, 4, 3, y));

    return 0;
}
