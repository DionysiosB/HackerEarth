#include <cstdio>
#include <vector>
#include <algorithm>

const long LIMIT = 100000;

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        int n; scanf("%d", &n);
        std::vector<long> level(n);
        for(int p = 0; p < n; p++){scanf("%ld", &level[p]);}
        sort(level.begin(), level.end());
        long m(LIMIT), M(0);
        for(int p = 0; p < n/2; p++){
            long current = level[p] + level[n - 1 - p];
            if(current < m){m = current;}
            if(current > M){M = current;}
        }

        printf("%ld\n", M - m);
    }

    return 0;
}
