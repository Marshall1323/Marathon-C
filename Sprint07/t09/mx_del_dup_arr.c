#include <stddef.h>
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size);
int *mx_del_dup_arr(int *src, int src_size, int *dst_size){
	if(src == NULL)
		return NULL;
	int *new_mas = (int *)(malloc(src_size * sizeof(int)));
	*dst_size = 0;
	for(int i = 0; i < src_size; i++){
		char ex = 0;
		for(int j = 0; j < i; j++)
            if(src[i] == new_mas[j])
				ex = 1;
		if(ex == 1)
			continue;
		new_mas[*dst_size]=src[i];
		*dst_size = *dst_size + 1;
	}
	int *dst = (int *)(malloc(*dst_size * sizeof(int)));
	for(int i = 0; i < *dst_size; i++)
		dst[i] = new_mas[i];
	return dst;
}
