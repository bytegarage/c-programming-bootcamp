#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * === Get The Line Dynamically === 
 *
 *  Implement a function that acquires a line from the console and has this prototype:
 *
 *    char *get_line_alloc(int *plen)
 * 
 * Goals:
 *  - don't use scanf!
 *  - acquire a string up to the newline character
 *  - always put a null characher at the end of the buffer
 *  - return a newly allocated buffer containig the entire input string
 *  - if given, store the length of the input string in plen
 *  - plen may be NULL
 *  - return NULL if an error occurs
 *  - implement a main loop that asks the user to insert a line, acquire it and print it
 *  - terminate the main loop when the user enters "END"
 *  - in the main loop manage the allocated buffer
 * 
 * Tips:
 *  - something might be useful to dynamically allocate memory...
 * 
 */

char *get_line_alloc(int *plen)
{
    if (!plen) // same as: if(plen == NULL)
    {
        /* the user does not care about the lenght */
        plen = malloc(sizeof(*plen));
        if (!plen)
        {
            /* cannot allocate memory... failure */
            return NULL;
        }
    }

    *plen = 0;
    char *line = NULL;
    int buffer_size = 0, input;
    const int alloc_block_size = 5;

    while (true)
    {
        input = getchar();

        if (buffer_size <= *plen)
        {
            /* resize the memory block! */
            buffer_size += alloc_block_size;
            char *realloc_line = realloc(line, buffer_size);

            if (!realloc_line)
            {
                /* cannot do reallocation... failure */
                free(line);
                return NULL;
            }

            /* reallocation done! */
            line = realloc_line;
        }

        if (input != '\n' && input != EOF)
        {
            line[(*plen)++] = (char)input;
        }
        else
        {
            break;
        }
    }

    line[*plen] = '\0';
    return line;
}

int main()
{
    printf("\n=== Get The Line Dynamically ===\n\n");

    char *line = NULL;
    int len = -1;

    do
    {
        printf("Enter a line (END to quit):\n");

        free(line);
        line = get_line_alloc(NULL);

        if (line)
        {
            printf("%s (len=%d)\n", line, len);
        }
        else
        {
            printf("Cannot allocate memory\n");
        }
    } while (line && strcmp(line, "END"));

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
