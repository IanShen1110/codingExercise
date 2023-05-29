#include <stdio.h>

int main(){
    const unsigned long long mod = 1e9 + 7;
    int n;
    unsigned long long a = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        a = ((a % mod) * (i % mod)) % mod;
    }
    printf("%llu", a);
}