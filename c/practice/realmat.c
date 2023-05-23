#include <stdio.h>
#define L 10
int B[L][L];
int R, C, N;
int order[L];
void un_spin() {
    int X[L][L];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            X[C - j - 1][i] = B[i][j];
    int temp = R; R = C; C = temp;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            B[i][j] = X[i][j];
}
void un_flip() {
    int X[L][L];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            X[R - i - 1][j] = B[i][j];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            B[i][j] = X[i][j];
}
int main(){
    while (scanf("%d %d %d", &R, &C, &N) != EOF){
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++)
               scanf("%d", &B[i][j]);
        for (int i = 0; i < N; i++)
            scanf("%d", &order[i]);
        for (int i = N - 1; i >= 0; i--) {
            if (order[i] == 0) un_spin();
            else un_flip();
        }
        printf("%d %d\n", R, C);
        for (int i = 0; i < R; i++)
            for (int j = 0; j < C; j++) 
                printf(j == C - 1 ? "%d\n" : "%d ", B[i][j]);
    }
    return 0;
}