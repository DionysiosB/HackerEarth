#include <cstdio>
#include <vector>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long n; scanf("%ld\n", &n);
        std::vector<long> list(n + 1);
        for(long p = 1; p <= n; p++){scanf("%ld", &list[p]);}

        bool ans(true);
        for(long p = 1; p <= n; p++){if(list[list[p]] != p){ans = false; break;}}
        puts(ans ? "inverse" : "not inverse");
    }

    return 0;
}
