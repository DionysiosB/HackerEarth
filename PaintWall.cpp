#include <cstdio>
#include <vector>

int main(){

    const int M = 1000000007;
    const long N = 100005;

    std::vector<long> result(N);
    result[1] = 3 % M;
    for(int p = 2; p < N; p++){result[p] = 2 * result[p - 1]; result[p] %= M;}

    int t; scanf("%d\n", &t);
    while(t--){
        long n; scanf("%ld\n", &n);
        printf("%ld\n", result[n]);
    }

    return 0;
}
