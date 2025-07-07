#include <stdio.h>

int main() {

    int string;

    while ((string = getchar()) != EOF)
    {
        if (string == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else if (string == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (string == '\t')
        {
            putchar('\\');
            putchar('t');

        }
        else
        {
            putchar(string);
        }
    }
    return 0;
}
