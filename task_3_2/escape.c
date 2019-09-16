#include<stdio.h>

void escape(char s[], char t[]);

int main(int argc, char *argv[])
{
    char text[] = "some \ttext \n what else \t hello";
    char str[50];

    escape(str, text);

    printf("%s\n", str);
    return 0;
}


void escape(char s[], char t[])
{
    int i, j;
    for (i = 0, j = 0; t[i] != '\0'; ++i, ++j) {
        switch (t[i]) {
        case '\t':
            s[j] = '\\';
            s[++j] = 't';
            break;
        case '\n':
            s[j] = '\\';
            s[++j] = 'n';
            break;
        default:
            s[j] = t[i];

        }
    }
}
