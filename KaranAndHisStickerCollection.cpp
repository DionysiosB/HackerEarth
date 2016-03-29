#include <cstdio>

int main(){

    const unsigned long long L = 300000000;
    long n; scanf("%ld\n", &n);
    long ans(0);
    while(n--){unsigned long long x; scanf("%llu", &x); if(x < L){++ans;}}
    printf("%ld\n", ans);

    return 0;
}
