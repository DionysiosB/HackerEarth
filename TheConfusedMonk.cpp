#include <cstdio>
#include <vector>

long long gcd (long long a, long long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    const long long Q = 1000000007;

    int n; scanf("%d\n", &n);
    std::vector<long long> a(n);
    for(int p = 0; p < n; p++){scanf("%lld", &a[p]);}

    long long gcdTotal(0);
    long long prodTotal(1);
    for(int p = 0; p < n; p++){
        prodTotal *= a[p]; prodTotal %= Q;
        gcdTotal = gcd(gcdTotal, a[p]);
    }
    
    long long ans(1);
    for(int p = 0; p < gcdTotal; p++){ans *= prodTotal; ans %= Q;}
    printf("%lld\n", ans);

    return 0;
}
