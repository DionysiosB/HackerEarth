#include <cstdio>
#include <iostream>

int main(){

    const int64_t FIVE = 5;

    int64_t n; scanf("%lld\n", &n);
    int64_t power(FIVE);
    long ans(0);
    while(power < n){ans += (n / power); power *= FIVE;}
    printf("%ld\n", ans);

    return 0;
}
