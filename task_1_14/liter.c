#include <stdio.h>
#define NUM 80
int main()
{
    int word_leangth = 0;
    char c;
    int i;
    int arr[NUM];
    for (int i = 0; i < NUM; ++i) {
        arr[i] = 0;
    }

    while ((c = getchar()) != '\n') {
        ++arr[c - '0'];
    }


    for (int j = 0; j < NUM; ++j) {
        printf("%c: ", j + '0');
        for (i = 0; i < arr[j]; i++)
            printf("-");

        printf("\n");

    }

    return 0;
}
