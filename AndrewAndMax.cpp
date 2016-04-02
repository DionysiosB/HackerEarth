#include <cstdio>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        double x, y, z; scanf("%lf %lf %lf\n", &x, &y, &z);
        double ans = x * y + y * z + z * x - (x * x + y * y + z * z) / 2.0;
        printf("%.2lf\n", ans);
    }

    return 0;
}
