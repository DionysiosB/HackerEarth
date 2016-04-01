#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long n, m; scanf("%ld %ld\n", &n, &m);
        std::map<long, std::vector<long> > edges;
        for(long p = 1; p <= n; p++){std::vector<long> emptyVec; edges[p] = emptyVec;}

        for(long p = 0; p < m; p++){
            long x, y; scanf("%ld %ld\n", &x, &y);
            edges[x].push_back(y);
            edges[y].push_back(x);
        }






    }

    return 0;
}
