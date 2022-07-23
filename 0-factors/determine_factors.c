#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include "main.h"

/**
 * read_file_by_line - read file line by line
 * @filename: file path
 * Return: Nothing
 */
long long int determine_factors(long long int number)
{
    long long int i = 2;

    while (i <= number)
    {
        if (number % i == 0)
        {
            return i;
        }
        i++;
    }

    return 1;
}
