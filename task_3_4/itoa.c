#include<stdio.h>
#include<string.h>
/* itoa: преобразование n в стринг s */
void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)     /* сохраняем знак */
        n = -n;             /* делаем n положительным */
    i = 0;
    do {    /* генерируем цифры в обратном порядке */
        s[i++] = n % 10 + '0';  /* следующая цифра */
    } while ((n /= 10) > 0);    /* исключить ее */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';

    reverse(s);
}

int main(int argc, char *argv[])
{
    int number = 12345;
    char str[20];

    itoa(number, str);

    printf("%s\n", str);
    return 0;
}
