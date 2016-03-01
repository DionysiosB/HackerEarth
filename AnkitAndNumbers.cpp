#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        int n; scanf("%d\n", &n);
        int64_t power(1);
        for(int p = 0; p < n - 1; p++){power *= 2;}
        printf("%lld\n", power * n * (n + 1) / 2);
    }

    return 0;
}
