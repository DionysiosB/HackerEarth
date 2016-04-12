#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    printf("%ld\n", n * (n - 1) * (n - 2) / 3);

    return 0;
}
