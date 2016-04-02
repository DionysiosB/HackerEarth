#include <cstdio>
#include <iostream>
#include <set>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long n, m; scanf("%ld %ld\n", &n, &m);
        std::set<int64_t> candies;
        for(long p = 0; p < n; p++){int64_t x; scanf("%lld", &x); candies.insert(x);}
        for(long p = 0; p < m; p++){
            int64_t x; scanf("%lld", &x); 
            puts(candies.count(x) > 0 ? "YES" : "NO");
            candies.insert(x);
        }
    }

    return 0;
}
