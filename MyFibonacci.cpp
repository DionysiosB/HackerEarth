#include <cstdio>
#include <vector>

int main(){

    const int L = 12;

    int a, b, n; scanf("%d %d %d\n", &a, &b, &n);

    if(n == 1){printf("%d\n", a);}
    else if(n == 2){printf("%d\n", b);}
    else{
        std::vector<long> fib(n + 1);
        fib[1] = a; fib[2] = b;
        for(int p = 3; p <= n; p++){fib[p] = fib[p - 1] + fib[p - 2];}
        printf("%ld\n", fib[n]);
    }

    return 0;
}
