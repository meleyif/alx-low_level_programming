#include "function_pointers.h"

/**
  * int_index - Integer searching index
  * @array: Array given
  * @size: Size of the array
  * @cmp: Pointer to the function
  *
  * Return: Nothing
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
