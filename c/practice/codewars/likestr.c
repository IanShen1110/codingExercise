#include <stdlib.h>
#include <stdio.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n]) {
    char *result = calloc(100, sizeof(char));
    if(n==0) sprintf(result, "no one likes this");
    else if(n==1) sprintf(result, "%s likes this\0", names[0]);
    else if(n==2) sprintf(result, "%s and %s like this", names[0], names[1]);
    else if(n==3) sprintf(result, "%s, %s and %s like this", names[0], names[1], names[2]);
    else if(n>=4) sprintf(result, "%s, %s and %zu others like this", names[0], names[1], n-2);
    return result;
}
int main(){}