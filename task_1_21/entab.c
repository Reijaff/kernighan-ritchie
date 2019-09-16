#include <stdio.h>

#define MAXLINE 1000 /* максимальный размер вводимой строки + 1 */
#define TABSIZE 8    /* размер табуляции в пробелах */

int getl(char line[], int maxline);
void entab(char to[], char from[]);

int main()
{
    int len; /* длина текущей строки */
    char line[MAXLINE]; /* текущая строка */
    char newline[MAXLINE]; /* новая строка */

    len = 0;
    while ((len = getl(line, MAXLINE)) > 0) {
        entab(newline, line);
        printf("%s", newline);
    }
    return 0;
}
int getl(char s[], int lim)
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
void entab(char to[], char from[])
{
    int i, j, k, ns, nt, c, m;

    i = j = ns = nt = 0;
    while ((c = from[i]) != '\0') {
        if (c == ' ')
            ++ns;
        else if (ns > 0) {
            nt = ns / (TABSIZE - 1);
            for (m = 0; m < nt; ++m, ++j)
                to[j] = '\t';
            for (k = 0; k < ns - nt * (TABSIZE - 1) - (nt - 1); ++k, ++j)
                to[j] = ' ';
            to[j] = c;
            ns = 0;
            ++j;
        } else {
            to[j] = c;
            ++j;
        }
        ++i;
    }
    to[j] = '\0';
}
