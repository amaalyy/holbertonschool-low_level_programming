#include <stdio.h>
/**
 * main - entry point
 * return: 0
 */
int main(void)
{
    printf("Size of a char: %lu\n", sizeof(char));
    printf("Size of an init: %lu\n", sizeof(int));
    printf("Size of a long int: %lu\n", sizeof(long int));
    printf("Size of s long long int: %lu\n", sizeof(long long int));
    printf(" Size of a float: %lu", sizeof(float));
    return 0;
}
