#include <cstdio>
#include <cmath>

int main(){

    long t; scanf("%ld\n", &t);
    while(t--){
        long a, b, c, k; scanf("%ld %ld %ld %ld\n", &a, &b, &c, &k);
        long dis = (b * b - 4 * a * (c - k));
        double x = (dis < 0) ? 0 : ((-b + sqrt(dis)) / (2.0 * a));
        long ans = ceil(x); 
        printf("%ld\n", ans);
    }

    return 0;
}
