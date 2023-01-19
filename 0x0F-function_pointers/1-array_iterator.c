
NaheemahBello
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x0F-function_pointers/1-array_iterator.c
@NaheemahBello
NaheemahBello 1-array_iterator.c
 1 contributor
20 lines (18 sloc)  429 Bytes
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 *                  parameter on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
