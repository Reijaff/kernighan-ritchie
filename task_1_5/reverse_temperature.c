#include <stdio.h>

int main()
{
    float fahr;
    int step;

    printf("celsius | fahranheit\n");

    for (float i = 300.0; i >= 0; i -= 20.0) {

        fahr = (9.0 / 5.0) * i + 32.0;
        printf("%3.0f \t%6.1f\n", i, fahr);
    }
}
