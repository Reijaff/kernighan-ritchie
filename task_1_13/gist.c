#include <stdio.h>

int main()
{
    int word_leangth = 0;
    char c;
    int i;

    while ((c = getchar()) != '\n') {
        if (c != ' ')
            word_leangth++;
        else {
            for (i = 0; i < word_leangth;
                 i++)
                printf("_");
            printf("\n");
            word_leangth = 0;
        }
    }

    for (i = 0; i < word_leangth; i++)
        printf("_");

    printf("\nPress any kay to exit\n");

    return 0;
}
