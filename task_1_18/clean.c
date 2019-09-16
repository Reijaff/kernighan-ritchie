#include <stdio.h>

#define MAXLINE 1000

/* Программа удаляет все завершающие пробелы и табуляции */

int getstr(char s[], int maxline);

int main(void)
{
    int len, i;
    char line[MAXLINE];

    while ((len = getstr(line, MAXLINE)) > 0) {
        /* для исключения символа '\0' */
        len = len - 1;

        printf("Длина строки %d символа(-ов)\n", len);
        for (i = len - 1; i >= 0; --i)
            if (line[i] == ' ' || line[i] == '\t')
                len = len - 1;
            else
                i = 0;

        for (i = 0; i < len; ++i)
            printf("%c", line[i]);
        printf("\n");

        printf("Длина строки без завершающих ее пробелов и табуляций %d\n",
               i);
    }

    return 0;
}

int getstr(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;

}
