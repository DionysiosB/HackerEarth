#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long n; scanf("%ld\n", &n);
        std::vector<long> array(n, 0);
        for(long p = 0; p < n; p++){scanf("%ld", &array[p]);}
        sort(array.begin(), array.end());
        for(long p = n - 1; p >= 0; p--){printf("%ld ", array[p]);}
        puts("");
    }


    return 0;
}
