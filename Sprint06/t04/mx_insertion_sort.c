#include <stdio.h>

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size) {
    int total_shifts = 0;  
    for (int i = 1; i < size; i++) { 
        if (arr[i] == NULL) return 0;
        char *current_string = arr[i];  
        int j = i - 1;  

        while (j >= 0 && mx_strlen(arr[j]) > mx_strlen(current_string)) { 
            arr[j + 1] = arr[j];  
            total_shifts++;
            j--;  
        }  
        arr[j + 1] = current_string;  
    }
    return total_shifts;
}











