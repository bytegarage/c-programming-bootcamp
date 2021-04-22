#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define X_LEN 10

int sum_arr(int arr[], const int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int sum_ptr(const int *const p, const int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += p[i];
    }
    return sum;
}

int sum_ptr_arithmetic(const int *const p, const int len)
{
    int sum = 0;
    for(const int *p_item = p; p_item < p + len; p_item++)
    {
        sum += *p_item;
        printf("%lld, %lld, %d\n", p_item - p, (int64_t)p_item, sum);
    }
    return sum;
}

int main()
{
    printf("\n=== Pointers Arithmetic ===\n\n");

    int x[X_LEN] = {1, 4, -3, 2};

    printf("sum_arr: %d\n", sum_arr(x, X_LEN));
    printf("sum_ptr: %d\n", sum_ptr(x, X_LEN));

    printf("---\n");
    int *ptr = x; // same as: int *ptr = &x[0]
    printf("%lld, %d\n", (uint64_t)ptr, *ptr);
    ptr++; // same as: ptr = ptr + 1
    printf("%lld, %d\n", (uint64_t)ptr, *ptr);

    printf("---\n");
    printf("sum_ptr_arithmetic: %d\n", sum_ptr_arithmetic(x, X_LEN));

    /*
     * Illegal operations:
     *    pointer + pointer
     *    pointer / pointer
     *    pointer * pointer
     *    pointer % pointer
     * 
     */

    printf("\n\n=== ByteGarage ===\n\n");
    return EXIT_SUCCESS;
}
