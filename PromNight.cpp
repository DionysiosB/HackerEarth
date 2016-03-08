#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int t; scanf("%d", &t);
    while(t--){
        long m, n; scanf("%ld %ld\n", &m, &n);
        std::vector<int> boys(m);
        std::vector<int> girls(n);
        for(long p = 0; p < m; p++){scanf("%d", &boys[p]);}
        for(long p = 0; p < n; p++){scanf("%d", &girls[p]);}
        sort(boys.begin(), boys.end());
        sort(girls.begin(), girls.end());

        long b(0);
        for(long p = 0; p < n; p++){b += (girls[p] < boys[b]);}
        puts((b < m) ? "NO" : "YES");

    }

    return 0;
}
