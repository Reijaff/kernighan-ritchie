#include <stdio.h>

#define MAXLINE 50   /* максимальная длина строки ввода */
#define LINEWIDTH 10 /* максимальная длина строки вывода */
#define BORDER 5     /* ширина правого края строки вывода */

int getl(char line[], int maxline);
void justify(char to[], char from[]);

int len; /* длина текущей строки */

int main()
{
    char line[MAXLINE]; /* текущая строка */
    char newline[MAXLINE]; /* преобразованная строка */

    printf("0123456789ABCDEF\n"); // шкала позиций символов
    len = 0;
    while ((len = getl(line, MAXLINE)) > 0) {
        justify(newline, line);
        printf("%s\n", newline);
    }
    return 0;
}

/* justify: формирует из строкИ 'from' стрОки, выровненные
 *          по правому краю в 'to'                         */
void justify(char to[], char from[])
{
    int i, j, c, ns, nstmp, start;

    j = ns = nstmp = start = 0;
    while (len - ns > LINEWIDTH) {
        ns += LINEWIDTH;
        for (i = ns - BORDER; i < ns; ++i) {
            c = from[i];
            if (c == ' ' || c == '\t' || c == '\n') {
                nstmp = i;
            }
        }
        if (nstmp > ns - BORDER)
            ns = nstmp + 1;
        for (i = start; i < ns - 1; ++i, ++j)
            to[j] = from[i];
        to[ns - 1] = '\n';
        ++j;
        start = ns;
    }
    i = ns;
    while ((to[j] = from[i]) != '\0') {
        ++i; ++j;
    }
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
