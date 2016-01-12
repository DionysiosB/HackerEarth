#include <cstdio>
#include <map>
#include <set>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long odds(0), evens(0);
        std::map<long, long> counts;

        long n; scanf("%ld\n", &n);
        while(n--){
            long x; scanf("%ld", &x);
            if(x % 2){++odds;} else{++evens;}
            if(counts.count(x) > 0){++counts[x];} else{counts[x] = 1;}
        }

        long res = odds * (odds - 1) / 2 + evens * (evens - 1) / 2;
        for(std::map<long, long>::iterator mapIter = counts.begin(); mapIter != counts.end(); ++mapIter){long c = mapIter->second; res -= c * (c - 1) / 2;}
        printf("%ld\n", res);
    }

    return 0;
}
