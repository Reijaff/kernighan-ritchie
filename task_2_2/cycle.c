#include<stdio.h>
#include<string.h>

int main()
{
    char c;
    char s[10];
    int lim = 10;

    for (int i = 0; i < lim - 1 ; ++i) {
        if ((c = getchar()) != '\n') {
            if (c != EOF) {
                s[i] = c;
            }
        }
    }
    printf("%s", s);
    return 0;
}
