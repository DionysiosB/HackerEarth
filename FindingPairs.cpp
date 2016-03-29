#include <cstdio>
#include <map>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long n; scanf("%ld\n", &n);
        std::map<long, long> counts;
        while(n--){
            long x; scanf("%ld", &x);
            if(counts.count(x) > 0){++counts[x];}
            else{counts[x] = 1;}
        }

        long ans(0);
        for(std::map<long, long>::iterator mapIter = counts.begin(); mapIter != counts.end(); mapIter++){long value = mapIter->second; ans += value * (value + 1) / 2;}
        printf("%ld\n", ans);
    }

    return 0;
}
