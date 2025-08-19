#include <stdio.h>

int main() {

    printf("SIGNED:\n");

    signed char s_char = 1;
    while (s_char > 0)
    {
        s_char *= 2;
    }
    signed char schar_min = s_char;
    s_char = 1;
    while (s_char > 0)
    {
        s_char *= 2;
    }
    signed char schar_max = s_char - 1;
    printf("signed char: [%d, %d]\n", schar_min, schar_max);

    
    short sshort = 1;
    while (sshort > 0)
    {
        sshort *= 2;
    }
    short sshort_min = sshort;
    sshort = 1;
    while (sshort > 0)
    {
        sshort *= 2;
    }
    short sshort_max = sshort - 1;
    printf("signed short: [%d, %d]\n", sshort_min, sshort_max);

    
    int sint = 1;
    while (sint > 0)
    {
        sint *= 2;
    }
    int sint_min = sint;
    sint = 1;
    while (sint > 0)
    {
        sint *= 2;
    }
    int sint_max = sint - 1;
    printf("signed int: [%d, %d]\n", sint_min, sint_max);

    
    long slong = 1;
    while (slong > 0)
    {
        slong *= 2;
    }
    long slong_min = slong;
    slong = 1;
    while (slong > 0)
    {
        slong *= 2;
    }
    long slong_max = slong - 1;
    printf("signed long: [%ld, %ld]\n", slong_min, slong_max);

    printf("\nUNSIGNED:\n");

    
    unsigned char uchar = 1;
    while (uchar * 2 > uchar)
    {
        uchar *= 2;
    }
    uchar = uchar * 2 - 1;
    printf("unsigned char: [0, %u]\n", uchar);

    
    unsigned short ushort = 1;
    while (ushort * 2 > ushort)
    {
        ushort *= 2;
    }
    ushort = ushort * 2 - 1;
    printf("unsigned short: [0, %u]\n", ushort);

    
    unsigned int uint = 1;
    while (uint * 2 > uint)
    {
        uint *= 2;
    }
    uint = uint * 2 - 1;
    printf("unsigned int: [0, %u]\n", uint);

    
    unsigned long ulong = 1;
    while (ulong * 2 > ulong)
    {
        ulong *= 2;
    }
    ulong = ulong * 2 - 1;
    printf("unsigned long: [0, %lu]\n", ulong);


    float floatmax = 1.0f;
    while (floatmax * 2.0f < 1.0f / 0.0f)
    {
        floatmax *= 2.0f;
    }
    printf("float max ≈ %e\n", floatmax);

   
    double doublemax = 1.0;
    while (doublemax * 2.0 < 1.0 / 0.0)
    {
        doublemax *= 2.0;
    }
    printf("double max ≈ %e\n", doublemax);

    
    long double ldoublemax = 1.0;
    while (ldoublemax * 2.0 < 1.0 / 0.0)
    {
        ldoublemax *= 2.0;
    }
    printf("long double max ≈ %Le\n", ldoublemax);

    return 0;

}
