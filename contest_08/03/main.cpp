int* new_array(int len, int value) {
    int* array = new int[len];
    for (int i = 0; i < len; i++) {
        array[i] = value;
    }
    return array;
}

int set_new_length(int** array, int old_len, int new_len) {
    if (new_len < old_len) {
        *array = (int*)realloc(*array, new_len * sizeof(int));
    }
    else if (new_len > old_len) {
        *array = (int*)realloc(*array, new_len * sizeof(int));
        for (int i = old_len; i < new_len; i++) {
            (*array)[i] = 0;
        }
    }
    return new_len;
}

int merge(int** dest_array, int len_dest_array, const int* src_array, int len_src_array) {
    int new_len = len_dest_array + len_src_array;
    *dest_array = (int*)realloc(*dest_array, new_len * sizeof(int));
    for (int i = len_dest_array, j = 0; i < new_len; i++, j++) {
        (*dest_array)[i] = src_array[j];
    }
    return new_len;
}

int dot(const int* a, const int* b, int len) {
    int result = 0;
    for (int i = 0; i < len; i++) {
        result += a[i] * b[i];
    }
    return result;
}

int* find(int* array, int len, int value) {
    for (int i = 0; i < len; i++) {
        if (array[i] == value) {
            return &array[i];
        }
    }
    return nullptr;
}

void delete_array(int** array) {
    if (*array != nullptr) {
        delete[] * array;
        *array = nullptr;
    }
}