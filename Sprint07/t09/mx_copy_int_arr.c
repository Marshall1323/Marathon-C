#include <stddef.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);
int *mx_copy_int_arr(const int *src, int size){
	if(src == NULL)
		return NULL;	
	int *array = (int *)(malloc(size * sizeof(int)));
	for(int i = 0; i < size; i++)
		array[i] = src[i];
	return array;
}
