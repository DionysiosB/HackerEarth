#include <cstdio>

int main(){

    long T; scanf("%ld\n", &T);
    while(T--){

        long long n; scanf("%lld\n", &n);
        int count(0);
        while(n > 0){count += n % 2; n /= 2;}
        printf("%d\n", count);
    }

    return 0;
}
