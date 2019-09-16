#include<stdio.h>
#include<string.h>
int any(char s1[], char s2[])
{
    int index,
        count = 0;

    for (int i = 0; s2[i] != '\0'; ++i) {
        for (int k = 0; s1[k] != '\0'; ++k) {
            if (s2[i] == s1[k]) {
                if (count == 0) {
                    index = k;
                }
                if (k <= index) {
                    index = k;
                    count = 1;
                }
            }
        }

    }
    if (count == 1 ) {
        return index;
    } else {
        return -1;
    }
}

int main()
{
    char smain[] = "hello, wolrd!";
    char sadd[] = "wo!";
    printf("%d\n", any(smain, sadd));


    return 0;
}
