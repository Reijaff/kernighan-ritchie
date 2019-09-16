#include<stdio.h>
#include<string.h>

void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main()
{
    char arr[100];
    int c, i;
    for (i = 0; (c = getchar()) != EOF; ++i) {
        arr[i] = c;
        if (c == '\n') {
            arr[i] = '\0';
			reverse(arr);
            printf("%s\n", arr);
            i = -1;
        }
    }
    return 0;
}
