#include <stdio.h>

int mx_strcmp (const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) {
    int min_position, swaps = 0;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == NULL) return 0;
        min_position = i;

        for (int j = i + 1; j < size; j++) {
            if (mx_strlen(arr[min_position]) > mx_strlen(arr[j]))
                min_position = j;
            else if (mx_strlen(arr[min_position]) == mx_strlen(arr[j]) && 
            mx_strcmp(arr[min_position], arr[j]) > 0)
                min_position = j;
        }
        if (min_position != i) {
            swaps++;
            char *temp = arr[i];
            arr[i] = arr[min_position];
            arr[min_position] = temp;
        }
    }
    return swaps;   
}










