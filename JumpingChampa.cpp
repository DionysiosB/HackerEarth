#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld\n", &t);
    while(t--){
        long n, q; scanf("%ld %ld\n", &n, &q);
        int64_t m(10000000), M(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < m){m = x;}
            if(x > M){M = x;}
        }
        printf("%lld\n", q * (M - m));
    }

    return 0;
}
