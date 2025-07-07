#include <stdio.h>

int main() {
 
    int string, spaces = 0, tabs = 0, endstr = 0;

    while ((string = getchar()) != EOF) 
    {

        if (string == ' ')
            spaces++;

        else if (string == '\t')
            tabs++;

        else if (string == '\n')
            endstr++;

    }

    printf("spaces: %d\n", spaces);
    printf("tabulations: %d\n", tabs);
    printf("end strings: %d\n", endstr);

    return 0;
