#include <stdio.h>
#define L 10
int B[L][L];
int step[L];
int R, C, M;


void sync(int **tmp){
    for(int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            B[i][j] = tmp[i][j];
        }
    }
}
void unflip(){
    int tmp[L][L];
    for(int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            tmp[R-1-i][j] = B[i][j];
        }
    }
    for(int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            B[i][j] = tmp[i][j];
        }
    }
}
void unrot(){
    int tmp[L][L];
    for(int i = 0; i < C; i++){
        for (int j = 0; j < R; j++){
            tmp[i][j] = B[R-1-j][C-1-i];
        }
    }
    int temp = R; R = C; C = temp;
    for(int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            B[i][j] = tmp[i][j];
        }
    }
}
int main(){
    while(scanf("%d %d %d", &R, &C, &M)!= EOF){
        for(int i = 0; i < R; i++){
            for(int j = 0; j < C; j++){
                scanf("%d", &B[i][j]);
            }
        }
        for(int i = 0; i < M; i++){
            scanf("%d", &step[i]);
        }
        for(int i = M - 1; i > 0; i--){
            (step[i] == 0) ? unrot : unflip;
        }
    }
    printf("%d %d", R, C);
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(j == C-1)printf("%d", B[i][j]);
            printf("%d ", B[i][j]);
        }
        putchar('\n');
    }
}