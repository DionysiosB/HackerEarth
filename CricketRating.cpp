#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);

    long sumSoFar(0);
    long maxSum(0);
    for(long p = 0; p < n; p++){
        int current; scanf("%d", &current);
        sumSoFar = current + (sumSoFar > 0) * sumSoFar;
        if(sumSoFar > maxSum){maxSum = sumSoFar;}
    }

    printf("%ld\n", maxSum);

    return 0;
}
