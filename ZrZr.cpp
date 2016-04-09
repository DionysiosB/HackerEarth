#include <cstdio>

int main(){

    const long long M = 5;
    int T; scanf("%d\n", &T);
    while(T--){
        long long n; scanf("%lld\n", &n);
        long long total(0);
        long long div(M);
        while(div <= n){total += n / div; div *= M;}
        printf("%lld\n", total);
    }

    return 0;
}
