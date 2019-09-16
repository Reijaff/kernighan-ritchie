#include<stdio.h>
char* lower(char str[])
{
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = str[i] >= 'A' && str[i] <= 'Z' ? str[i] + 'a' - 'A' : str[i];
    }
	return str;
}

int main()
{
    char text[] = "Some Body Once Told Me";


    printf("%s\n", lower(text));
    return 0;
}
