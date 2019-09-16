#include <string.h>
#include <stdio.h>

void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

/* converts n to string s[], l - minimal field width */
void itoa(char n, char s[], char l)
{
    int i, sign;

    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    while (i < l)
        s[i++] = ' ';
    s[i] = '\0';
    reverse(s);
}

int main(void)
{
    char s[100] = "";
    itoa(-123, s, 10);
    printf("%s\n", s);

    return 0;
}
