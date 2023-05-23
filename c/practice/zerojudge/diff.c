#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *in = calloc(1001, sizeof(char));
    scanf("%s", in);
    int len = strlen(in);
    //printf("len = %d \n", len);
    long long A = 0;
    long long B = 0;
    for (int i = len-1; i >= 0; i--){
        switch (i % 2){
        case 1:
            A += in[i]-'0';
            continue;
        case 0:
            B += in[i]-'0';
            continue;
        }
    }
    printf("%ld\n", abs(A - B));
}