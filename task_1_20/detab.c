#include <stdio.h>
#define MAXLINE 1000    /* максимальный размер вводимой строки */
#define STOP 5          /* расстояние "стопов" табуляции друг от друга */

int getstr(char line[], int maxline);

int main(void)
{
    int len;
    char line[MAXLINE];
    int i, j;
    int symbols;        /* количество символов, выведенных на экран */
    int test =
        0;       /* количество символов, выведенных на экран, до следующего "стопа" табуляции  */

    while ((len = getstr(line, MAXLINE)) > 0) {
        for (i = 0, symbols = 0; line[i] != '\0'; ++i) {
            if (line[i] == '\t') {
                test = STOP - (symbols % STOP);

                for (j = 0; j < test; ++j) {
                    putchar('|');     /* для наглядности будем использовать символ '|' вместо пробела */
                    ++symbols;
                }
            } else {
                putchar(line[i]);
                ++symbols;
            }
        }
    }
    return 0;
}

int getstr(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;

}
