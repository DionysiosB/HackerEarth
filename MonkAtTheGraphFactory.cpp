#include <cstdio>

int main(){

    int n; scanf("%d\n", &n);
    //This solution assumes that the graph is connected (one component);

    long e(0);
    for(int p = 0; p < n; p++){int d; scanf("%d", &d); e += d;}
    puts(e == 2 * (n - 1) ? "Yes" : "No");

    return 0;
}
