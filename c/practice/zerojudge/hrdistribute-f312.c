#include <stdio.h>
#include <limits.h>
int max(int a, int b){
    return a > b ? a : b;
}
int main(){
    int a1, b1, c1, a2, b2, c2, num, sum;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);
    scanf("%d", &num);
    sum = INT_MIN;
    for(int x1 = 0; x1 <= num; x1++){
        int x2 = num - x1;
        sum = max(sum, (a1*x1*x1+b1*x1+c1)+(a2*x2*x2+b2*x2+c2));
    }
    printf("%d", sum);
}
