#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}

/* 
 * if value > 0 => accumulate value in accumulator => return 0 (SUCCESS)
 * else => do nothing => return -1 (FAIL)
 */
int accumulate(int *const accumulator, int value)
{
    if (value > 0)
    {
        *accumulator += value;
        return 0;
    }
    else
    {
        return -1;
    }
}

void accumulateWrapper(int *const accumulator, int value)
{
    if (accumulate(accumulator, value))
    {
        printf("Warning! Value = %d\n", value);
    }
}

void printStudents(int students)
{
    printf("Students = %d\n", students);
}

int main()
{
    printf("\n=== Functions And Pointers ===\n\n");

    int girls = 12, boys = 9;
    int students = sum(girls, boys);
    printStudents(students);

    int class_1 = 28, class_2 = 19, class_3 = -1;
    int accumulator = 0;

    accumulateWrapper(&accumulator, class_1);
    accumulateWrapper(&accumulator, class_2);
    accumulateWrapper(&accumulator, class_3);

    printf("Accumulator = %d\n", accumulator);

    printf("\n\n=== ByteGarage ===\n\n");
    return 0;
}