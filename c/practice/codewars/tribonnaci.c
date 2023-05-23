#include <stdlib.h>

//  return a dynamically allocated `long long` array of results

long long *tribonacci(const long long signature[3], size_t n) {
    if (n == NULL)return n;
    else{
        long long *tri = (long long*)calloc(n, sizeof(long long));
        for(size_t i = 0; i < n; i++){
            if (i<3) tri[i] = signature[i];
            else tri[i] = tri[i-1] + tri[i-2] + tri[i-3];
        }
        return tri;
    }
}