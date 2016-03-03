#include <cstdio>
#include <iostream>

int main(){

    int64_t a, b; scanf("%lld %lld\n", &a, &b);
    std::string visits; getline(std::cin, visits);
    int64_t res(0);
    for(long p = 0; p < visits.size(); p++){
        if(visits[p] == '1'){res += a; res %= b;}
        a *= a; a %= b;
    }

    printf("%lld\n", res);

    return 0;
}
