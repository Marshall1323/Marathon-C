int mx_popular_int(const int *arr, int size);
int mx_popular_int(const int *arr, int size) {
    int buf = 0;
    int pop;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = i + 1; j < size; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > buf) {
            buf = count;
            pop = arr[i];
        }
    }
    return pop;
}
