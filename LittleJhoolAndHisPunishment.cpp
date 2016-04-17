#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        int n, b, g; scanf("%d\n%d %d\n", &n, &b, &g);
        int m = (b < g) ? b : g;
        int M = (b < g) ? g : b;
        puts((M > m + 1) ? "Little Jhool wins!" : "The teacher wins!");
    }

    return 0;
}
