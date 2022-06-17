#include "main.h"

/**
 * alloc_grid - returns pointer to a 2D array of ints
 * @width: width
 * @height: height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * height);

		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}

	return (arr);
}
