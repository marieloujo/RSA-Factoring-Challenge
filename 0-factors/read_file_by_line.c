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
void read_file_by_line(const char *filename)
{
    FILE *fp;
    char *line = NULL;
    long int *data = NULL, number;
    size_t len = 0, line_number = 0;
    ssize_t read;

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: Can't open file <file>\n");
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, fp)) != -1) {
        number = atoll(line);
        data = determine_factors(number);
        if (data)
            printf("%lu=%lu*%lu\n", number, data[1], data[0]);
        line_number++;
    }

    fclose(fp);
    if (line)
        free(line);
    if (data)
        free(data);

    exit(EXIT_SUCCESS);
}
