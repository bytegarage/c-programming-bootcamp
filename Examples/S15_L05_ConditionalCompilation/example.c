#include <stdio.h>
#include <stdlib.h>

#define LOG_INFO
// #define BUFFER_SIZE 1024

int main()
{
    printf("\n=== Conditional Compilation ===\n\n");

#ifdef SOME_MACRO
    printf("SOME_MACRO exists\n");
#endif

#ifdef LOG_INFO
    printf("This is an INFO!\n");
#else
    printf("I shouldn't log anything!\n");
#endif

#if defined BUFFER_SIZE && BUFFER_SIZE > 2048
    printf("The buffer is huge, do something!\n");
#elif defined BUFFER_SIZE
    printf("The buffer is ok\n");
#else
    printf("You forgot to define BUFFER_SIZE!\n");
#endif

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
