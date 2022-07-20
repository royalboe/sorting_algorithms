#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: pointer to array
 * @size: size of the array
 **/
void selection_sort(int *array, size_t size)
{
	size_t i, j, n, k;
	int aux, flag;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			aux = array[i];
			flag = 0;
			for (j = i; j < size ; j++)
			{
				if (array[j] < aux)
				{
					k = j;
					aux = array[j];
					flag = 1;
				}
			}
			if (flag == 1)
			{
				n = array[i];
				array[i] = array[k];
				array[k] = n;
				print_array(array, size);
			}
		}
	}
}
