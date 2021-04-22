#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * === Move The Rook! === 
 *
 * Print out the positions the rook can move in the chess game
 * 
 * Goals:
 *  - Create a function with these parameters as input:
 *    - the current position as a string (e.g. "d5")
 *    - an array of characters to store possible moves
 *  - Store the correct positions in the array, separated by space
 *  - Implement at least 2 versions of the algorithm!
 * 
 */

void rook_poor(char current_position[], char output_buffer[])
{
    const char cols[] = "abcdefgh";
    const char rows[] = "12345678";

    char cur_col = current_position[0];
    char cur_row = current_position[1];
    char *dst = output_buffer;

    for (const char *p = cols; *p; p++)
    {
        if (*p != cur_col)
        {
            *dst++ = *p;
            *dst++ = cur_row;
            *dst++ = ' ';
        }
    }

    for (const char *p = rows; *p; p++)
    {
        if (*p != cur_row)
        {
            *dst++ = cur_col;
            *dst++ = *p;
            *dst++ = ' ';
        }
    }

    *dst = '\0';
}

void rook_good(char current_position[], char output_buffer[])
{
    const char cols[] = "abcdefgh";
    const char rows[] = "12345678";

    char cur_col = current_position[0];
    char cur_row = current_position[1];
    char *dst = output_buffer;

    for (const char *c = cols, *r = rows; *c || *r; *c ? c++ : r++)
    {
        if (*c != cur_col && *r != cur_row)
        {
            *dst++ = *c ? *c : cur_col;
            *dst++ = *c ? cur_row : *r;
            *dst++ = ' ';
        }
    }

    *dst = '\0';
}

void rook_good_alt(char current_position[], char output_buffer[])
{
    const char cols_rows[] = "abcdefgh12345678";

    char cur_col = current_position[0];
    char cur_row = current_position[1];
    char *dst = output_buffer;

    for (const char *p = cols_rows; *p; p++)
    {
        if (*p != cur_row && *p != cur_col)
        {
            *dst++ = isdigit(*p) ? cur_col : *p;
            *dst++ = isdigit(*p) ? *p : cur_row;
            *dst++ = ' ';
        }
    }

    *dst = '\0';
}

void print_buffer(const char pos[], const char buffer[])
{
    printf("Current position: %s\n", pos);
    printf("You can move to:  %s\n\n", buffer);
}

int main()
{
    printf("\n=== Move The Rook! ===\n\n");

    char pos[] = "d5";
    char buffer[100];

    rook_poor(pos, buffer);
    print_buffer(pos, buffer);

    rook_good(pos, buffer);
    print_buffer(pos, buffer);

    rook_good_alt(pos, buffer);
    print_buffer(pos, buffer);

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
