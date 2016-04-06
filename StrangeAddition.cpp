#include <cstdio>

long long flip(long long x){

    long long res(0);
    while(x > 0){res = 10 * res + (x % 10); x /= 10;}
    return res;
}

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long long x, y; scanf("%lld %lld\n", &x, &y);
        printf("%lld\n", flip(flip(x) + flip(y)));
    }

    return 0;
}
