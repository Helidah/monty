#include <stdio.h>

/**
 * print_array to print an array of integers
 *
 * @array is the array to be printed
 * @size is the Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
