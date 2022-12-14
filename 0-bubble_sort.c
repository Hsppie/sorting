#include <stddef.h>
#include "sort.h"

void bubble_sort(int *array, size_t size){

	size_t i, j;
	if (size < 2 )
		        return;
	for (i=0, i < size; i++){
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1]){
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
void swap(int *a, int *b){

	int temp = *a;
	*a = *b;
	*b = temp;
}
