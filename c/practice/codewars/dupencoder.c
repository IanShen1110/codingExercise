#include <stdlib.h>
#include <ctype.h>

char *DuplicateEncoder (const char *string){
    size_t size = 0;
    //calc size
    while (1){
        if(string[size]!='\0')size++;
        else break;
    }
    //create a container for the result
    char *encoded = calloc(size+1, sizeof(char));
    for(size_t i = 0; i < size; i++){
        int duped = -1;
        for (size_t j = 0; j < size; j++){
            if (tolower(string[i]) == tolower(string[j])) duped++;
        if (duped >= 1) encoded[i] = ')';
        else encoded[i] = '(';
        }
    }
    encoded[size] = '\0';
    return encoded;
}