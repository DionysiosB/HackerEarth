#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        int64_t n; scanf("%lld\n", &n);
        int64_t odd(0), even(0);
        while(n--){
            long x; scanf("%ld", &x);
            if(x % 2){++odd;} else{++even;}
        }
        printf("%lld\n", odd * even);
    }

    return 0;
}
