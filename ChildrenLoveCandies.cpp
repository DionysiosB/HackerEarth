#include <cstdio>

int main(){

    int q; scanf("%d\n", &q);
    while(q--){
        long n, t; scanf("%ld %ld\n", &n, &t);
        while(t--){n -= (n + 1)/2; n -= n/4;}
        printf("%ld\n", n);
    }

    return 0;
}
