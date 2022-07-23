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
long int *determine_factors(long int number)
{
    long int *data = malloc(sizeof(long int) * 2), i = 2;

    while (i <= number)
    {
        if (number % i == 0)
        {
            data[0] = i;
            data[1] = number / i;
            return data;
        }
        i++;
    }

    return data;
}
