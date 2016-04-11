#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long long> s(n);
    for(long p = 0; p < n; p++){scanf("%lld", &s[p]);}

    std::vector<long long> c(n);
    for(long p = 0; p < n; p++){scanf("%lld", &c[p]);}

    sort(c.begin(), c.end());
    sort(s.begin(), s.end());

    long long total(0);
    for(long p = 0; p < n; p++){total += c[p] * s[p];}
    printf("%lld\n", total);

    return 0;
}
