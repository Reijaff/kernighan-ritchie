#include<stdio.h>

int main(int argc, char *argv[])
{
    int count = 0;
    char text[] = "some of you might ask \t:\n what the hell is going on ??";
    for (int i = 0; text[i] != '\0'; ++i) {


        if (text[i] == ',' || text[i] == ' ' || text[i] == '\n' || text[i] == '\t') {


            count++;
        }
    }

    return count;
}
