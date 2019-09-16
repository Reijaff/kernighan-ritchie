#include<stdio.h>
#include<math.h>
#include<limits.h>


int main()
{
    int max_char, max_shrt_int, smax, smin;
    unsigned int max_int;
    unsigned long int max_long_int;
    smax = smin = 0;
    max_char = pow( 2, CHAR_BIT) - 1;
    max_shrt_int = pow( 2, 16 ) - 1;
    max_int = pow( 2, 32) - 1;
    max_long_int = pow( 2, 32) - 1;

    smax = max_char - pow( 2, 7 );
    smin = smax - max_char;

    printf("signed char| from %d to %d\n", smin, smax);
    printf("unsigned char| from %d to %d\n", 0, max_char);
    smax = max_int - pow(2, 31);
    smin = smax - max_int;
    printf("signed int| from %d to %d\n", smin, smax);
    printf("unsigned int| from %d to %u\n", 0, max_int);
    smax = max_long_int - pow(2, 31);
    smin = smax - max_long_int;
    printf("signed long int| from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int| from %d to %lu\n", 0, ULONG_MAX);
    smax = max_shrt_int - pow(2, 15);
    smin = smax - max_shrt_int;
    printf("signed short int| from %d to %d\n", smin, smax);
    printf("unsigned short int| from %d to %u\n", 0, max_shrt_int);

    return 0;
}
