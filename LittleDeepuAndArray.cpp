#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<int64_t> array(n);
    for(long p = 0; p < n; p++){scanf("%lld\n", &array[p]);}

    long m; scanf("%ld\n", &m);
    while(m--){
        int64_t x; scanf("%lld\n", &x);
        for(long p = 0; p < n; p++){if(array[p] > x){--array[p];}}
    }

    for(long p = 0; p < n; p++){printf("%lld ", array[p]);};
    puts("");

    return 0;
}
