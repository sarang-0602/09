#include <stdio.h>
#define SIZE 5

int main(void)
{
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 6};
    int flag_same = 1;

    for (i = 0; i < SIZE; i++)
    {
        if (a[i] != b[i])
        {
            printf("index %d: different value (a=%d, b=%d)\n", i, a[i], b[i]);
            flag_same = 0;
        }
    }

    if (flag_same)
        printf("Array has same value.\n");
    else
        printf("Array has different value.\n");

    return 0;
}