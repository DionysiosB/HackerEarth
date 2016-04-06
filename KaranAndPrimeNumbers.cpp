#include <cstdio>
#include <cmath>
#include <vector>

std::vector<bool> getPrimes(long x){

    std::vector<bool> ans(x + 1, 1);
    ans[0] = ans[1] = 0;
    for(long p = 2; p <= 1 + sqrt(x); p++){
        if(!ans[p]){continue;}
        for(long q = 2 * p; q <= x; q += p){ans[q] = 0;}
    }

    return ans;
}

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long a, b; scanf("%ld %ld\n", &a, &b);
        std::vector<bool> primes = getPrimes(b);
        long long total(0);
        for(long p = a; p <= b; p++){total += primes[p] * p;}
        printf("%lld\n", total);
    }

    return 0;
}
