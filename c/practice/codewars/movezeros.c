#include<stddef.h>

void move_zeros(size_t len, int arr[len])
{
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while (count < len) {
        arr[count++] = 0;
    }
}