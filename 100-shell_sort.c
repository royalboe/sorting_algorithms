#include "sort.h"
/**
 * shell_sort -  sorts an array of integers in
 * ascending order using the Shell sort algorithm,
 * using the Knuth sequence
 * @array: pointer to array
 * @size: size of the array
 **/
void shell_sort(int *array, size_t size)
{
	size_t kunth[1000], k = 0, j = 0, i;
	int n, j2;

	if (!array)
		return;
	while (j * 3 + 1 < size)
	{
		kunth[k] = j * 3 + 1;
		j = kunth[k++];
	}
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((j + kunth[k - i - 1]) > size - 1)
				break;
			j2 = j;
			while (array[j2] > array[j2 + kunth[k - i - 1]])
			{
				n = array[j2];
				array[j2] =  array[j2 + kunth[k - i - 1]];
				array[j2 + kunth[k - i - 1]] = n;
				j2 = j2 - kunth[k - i - 1];
				if (j2 < 0)
					break;
			}
		}
		print_array(array, size);
	}
}
