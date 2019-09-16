#include<stdio.h>
#include<string.h>


void itob(int n, char s[], int b);
void reverse(char s[]);

int main(int argc, char *argv[])
{
    int number = 619;
    char based[20] = "";


    itob(number, based, 16);
    printf("number : %d - %s\n", number, based);

    return 0;
}
void itob(int n, char s[], int b)
{

    int i, sign, count = 0;

    char seq[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = seq[n % b];
    } while ((n /= b) > 0);

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';

    reverse(s);

}
void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
