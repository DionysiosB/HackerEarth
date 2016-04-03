#include<cstdio>

int main(){

    long t; scanf("%ld\n", &t);
    while(t--){
        long long x; scanf("%lld\n", &x);
        long long ans  = (x / 4) * (x / 4 + (x % 4 >= 2));
        printf("%lld\n", ans);
    }

    return 0;
}
