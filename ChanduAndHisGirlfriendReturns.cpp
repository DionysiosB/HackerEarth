#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){

        long n, m; scanf("%ld %ld\n", &n, &m);
        std::vector<long> array(n + m);
        for(long p = 0; p < m + n; p++){scanf("%ld", &array[p]);}
        sort(array.begin(), array.end(), std::greater<long>());
        for(long p = 0; p < array.size(); p++){printf("%ld ", array[p]);}
        puts("");
    }

    return 0;
}
