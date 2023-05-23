#include <stdbool.h>
#include <ctype.h>

bool xo (const char* str)
{
    unsigned long long i = 0;
    int xcount = 0;
    int ocount = 0;
    while (str[i]!='\0')
    {
        if (tolower(str[i])=='x') xcount++;
        if (tolower(str[i])=='o') ocount++;
        i++;
    }
    return (xcount==ocount) ? true : false;
}