#include <stdio.h>

#define IN  1   /* внутри слова */
#define OUT 0   /* вне слова */

/* подсчет строк, слов и литер */
int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            putchar('\n');
            state = IN;
        }
        putchar(c);
    }
	return 0;
}
