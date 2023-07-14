#include "main.h"
#include <stdlib.h>

/**
* array_ range - creates an array
* @min: minimum range of values stored
* @max: maiximum range of values stored and number of elements
*
* Return: integer value
*/

int *array_range(int min, int max)

{
        int *ptr;
        int i, size;

        if (min > max)
                return (NULL);
        size = max - min + 1;

        ptr = malloc(sizeof(int) + size);

        if (ptr == NULL)
                return (NULL);

        for (i = 0; min <= max; i++)
                ptr[i] = min++;

        return (ptr);
}
