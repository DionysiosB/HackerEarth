#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int numBits(long x){
    int ans(0);
    while(x > 0){if(x % 2){++ans;}; x /= 2;}
    return ans;
}


int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long n, k; scanf("%ld %ld\n", &n, &k);
        std::vector<long> bits(n);
        for(long p = 0; p < n; p++){long b; scanf("%ld\n", &b); bits[p] = numBits(b);}
        sort(bits.begin(), bits.end(), std::greater<int>());

        long res(0);
        for(long p = 0; p < k; p++){res += bits[p];}
        printf("%ld\n", res);
    }

    return 0;
}
