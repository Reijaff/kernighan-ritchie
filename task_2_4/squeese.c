#include<stdio.h>
#include<string.h>

char* squeese(char s1[], char s2[])
{
    int lenc = strlen(s2),
        i, j;
    for (int c = 0; c < lenc; ++c) {
        for (i = j = 0; s1[i] != '\0'; i++)
            if (s1[i] != s2[c])
                s1[j++] = s1[i];
        s1[j] = '\0';

    }
	return s1;
}
int main()
{
    char smain[] = "abcdaefaaac";
    char sadd[] = "abc";

    printf("%s\n", squeese(smain, sadd));

    return 0;
}
