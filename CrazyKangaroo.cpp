#include <cstdio>
#include <iostream>

int main(){

    long t; scanf("%ld\n", &t);
    while(t--){
        int64_t a, b, m; scanf("%lld %lld %lld\n", &a, &b, &m);
        int64_t res = (b / m) - (a / m) + (a % m == 0);
        std::cout << res << std::endl;
    }

    return 0;
}
