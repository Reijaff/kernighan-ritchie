#include<stdio.h>
#include<string.h>

int htoi(char s[])
{
    if (s[0] != '0' && (s[1] != 'x' || s[1] != 'X')) {
        return 0;
    }
    int n = 0, len = strlen(s);
    for (int i = 2; i < len + 2; ++i) {
        if (s[i] >= 'a' && s[i] <= 'f') {
            n = 0x10 * n + (s[i] - '0' - 39);
        } else if (s[i] >= '0' && s[i] <= '9') {
            n = 0x10 * n + (s[i] - '0');
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            n = 0x10 * n + (s[i] - '0' - 7);
        }
    }
    return n;
}

int main()
{

    int meh = 0x34A;
    printf("%d\n", meh);
    char s[] = "0x34A";

    printf("%d", htoi(s));
    return 0;
}
