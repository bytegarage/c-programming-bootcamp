#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c = 'A';
    printf("c = '%c'\n", c);
    printf("is lower case:  %d\n", islower(c));
    printf("is upper case:  %d\n", isupper(c));
    printf("is digit        %d\n", isdigit(c));
    printf("\n");

    c = tolower(c);
    printf("to lower case:  '%c'\n", c);
    printf("\n");
    
    c = '0';
    printf("c = '%c'\n", c);
    printf("is digit        %d\n", isdigit(c));

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
