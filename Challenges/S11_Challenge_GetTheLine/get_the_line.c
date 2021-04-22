#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * === Get The Line === 
 *
 *  Implement a function that acquires a line from the console and has this prototype:
 *
 *    int get_line(char dst[], int size)
 * 
 * Goals:
 *  - don't use scanf!
 *  - acquire a string up to the newline character
 *  - always put a null characher at the end of the buffer
 *  - truncate the acquisition to leave space at the end of the buffer for the null character
 *  - return the number of characters acquired, excluding the null character
 *  - implement a main loop that asks the user to insert a line, acquire it and print it
 *  - terminate the main loop when the user enters "END"
 * 
 */

#define BUF_SIZE 100

void clear_stdin()
{
    int c = ' ';
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

int get_line(char dst[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        int c = getchar();
        if (c == '\n' || c == EOF)
        {
            break;
        }
        else
        {
            dst[i] = (char)c;
        }
    }
    if (i == size - 1)
    {
        clear_stdin();
    }
    dst[i] = '\0';
    return i;
}

int main()
{
    printf("\n=== Get The Line ===\n\n");

    char buffer[BUF_SIZE];

    do
    {
        printf("Enter a line:\n");
        int n = get_line(buffer, BUF_SIZE);
        printf("[%d] %s\n", n, buffer);
    } while (strcmp(buffer, "END"));

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
