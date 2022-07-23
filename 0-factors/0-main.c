#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - number factoring main program
 * @argc: number of argument passed
 * @argv: list of arguments
 * 
 * Description:
 * Usage: factors <file>
 *  where <file> is a file containing natural numbers to factor.
 *  One number per line
 *  You can assume that all lines will be valid natural numbers greater than 1
 *  You can assume that there will be no empy line, and no space before
 *  and after the valid number
 *  The file will always end with a new line
 *  Output format: n=p*q
 *   one factorization per line
 *   p and q don’t have to be prime numbers
 * 
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
    if (!(argc > 1))
    {
        printf("USAGE: factors <file>\n");
        exit(EXIT_FAILURE);
    }

    read_file_by_line(argv[1]);

    return (0);
}
