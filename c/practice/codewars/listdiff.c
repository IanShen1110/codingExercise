#include <stdlib.h>
#include <stdbool.h>

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {
    int *result = NULL;
    bool found = false;
    *z = 0;
    for(size_t i = 0; i < n1; i++){
        bool found = false;
        for (size_t j = 0; j < n2; j++){
            if (arr1[i] == arr2[j]){
                found = true;
                break;
            }
        }
        if (!found){
            *z++;
            int *tmp = (int*)realloc(result, (*z)*(sizeof(int)));
            if (tmp == NULL)
            {
                free(result);
                return NULL;
            }
            result = tmp;
            result[*z-1] = arr1[i];
        }
    }
    return result;
}