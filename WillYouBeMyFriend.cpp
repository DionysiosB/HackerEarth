#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int a; scanf("%d\n", &a);
    int n; scanf("%d\n", &n);
    int count(0);
    while(n--){int x; scanf("%d", &x); if(gcd(a, x) > 1){++count;}}
    printf("%d\n", count);

    return 0;
}
