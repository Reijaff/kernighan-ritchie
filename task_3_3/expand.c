#include<stdio.h>

void expand(char s1[], char s2[]);

int main(int argc, char *argv[])
{
    char regex[] = "z-a";
    char expanded[200];

    for (int i = 0; i < 200; i++) {
        expanded[i] = ' ';
    }

    printf("%s\n", regex);
    expand(regex, expanded);
    printf("%s\n", expanded);

    return 0;
}


void expand(char s1[], char s2[])
{
    int i, j = 0, k;
    for (k = 0; s1[k] != '\0'; k++, j++) {
        if (s1[k] != '-' && s1[k + 1] == '-' && s1[k + 2] != '-') {
            for (i = s1[k]; i <= s1[k + 2]; i++, j++) {
                s2[j] = i;
            }

            k += 2;
			j -= 1;	
        } else
            s2[j] = s1[k];
    }

    s2[j] = '\0';
}
