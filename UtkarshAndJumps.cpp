#include <cstdio>
#include <vector>

int main(){

    long N; int P; scanf("%ld %d\n", &N, &P);
    double p = P / 100.0;
    double q = 1 - p;
    
    std::vector<double> prob(N + 2, 0);
    prob[0] = 1;
    for(int x = 0; x <= N - 2; x++){
        prob[x + 2] += p * prob[x];
        prob[x + 3] += q * prob[x];
    }

    printf("%.6lf\n", prob[N]);

    return 0;
}
