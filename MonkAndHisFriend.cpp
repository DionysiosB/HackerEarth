#include <cstdio>
#include <iostream>

int main(){

    const int N = 64;
    
    long t; scanf("%ld\n", &t);
    while(t--){
        int64_t m, p; scanf("%lld %lld\n", &m, &p);
        int ans(0);
        for(long b = 0; b < N; b++){
            ans += (m % 2 != p % 2); 
            m /= 2; p /= 2;
            if(m == 0 && p == 0){break;}
        }

        printf("%d\n", ans);
    }

    return 0;
}
