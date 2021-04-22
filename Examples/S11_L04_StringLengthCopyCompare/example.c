#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n=== String Length, Copy, Compare ===\n\n");

    char my_string[] = "I love programming in C!";
    printf("The string: \"%s\"\n", my_string);

    /* String Length */
    int i;
    for (i = 0; my_string[i] != '\0'; i++);
    printf("String length (from scratch): %d\n", i);
    printf("Sizeof string: %lld\n", sizeof(my_string));

    /* String Length: Built In Method */
    printf("String length (built in): %lld\n", strlen(my_string));

    /* String Copy: strcpy, strncpy */
    char another_string[] = "Programming is funny";
    printf("Before copy: \"%s\"\n", my_string);
    printf("After copy: \"%s\"\n", strcpy(my_string, another_string));

    char another_long_string[] = "This is a dummy very very long string...";
    printf("Before copy: \"%s\"\n", my_string);
    printf("After copy: \"%s\"\n", strncpy(my_string, "Hello", 3)); // The null char is missing!
    printf("Before copy: \"%s\"\n", my_string);
    printf("After copy: \"%s\"\n", strncpy(my_string, "Hello", sizeof(my_string)));
    printf("Before copy: \"%s\"\n", my_string);
    strncpy(my_string, another_long_string, sizeof(my_string));
    my_string[sizeof(my_string) - 1] = '\0';
    printf("After copy: \"%s\"\n", my_string);

    /* String Compare: strcmp, strncmp */
    char str_1[] = "abc";
    char str_2[] = "abcaaaaa";

    printf("strcmp %s, %s: %d\n", str_1, str_2, strcmp(str_1, str_2));
    printf("strncmp %s, %s: %d\n", str_1, str_2, strncmp(str_1, str_2, 3));
    

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
