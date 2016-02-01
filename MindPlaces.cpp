#include <cstdio>
#include <iostream>
#include <map>

int main(){

    int n, m; scanf("%d %d\n", &n, &m);
    std::map<long, std::pair<long, long> > pos;
    for(long row = 0; row < n; row++){
        for(long col = 0; col < m; col++){
            long x; scanf("%ld ", &x); 
            pos[x] = std::pair<long, long>(row, col);
        }
        scanf("\n");
    }

    int q; scanf("%d\n", &q);
    while(q--){
        long x; scanf("%ld\n", &x);
        if(pos.count(x)){printf("%ld %ld\n", pos[x].first , pos[x].second);}
        else{puts("-1 -1");}
    }

    return 0;
}
