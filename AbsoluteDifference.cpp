#include <cstdio>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        int N, D; scanf("%d %d\n", &N, &D);

        long prev; scanf("%ld", &prev);
        bool flag(true);
        while(--N){
            long current; scanf("%ld", &current);
            long diff = current - prev;
            if(diff > D || diff < -D){flag = false;}
            prev = current;
        }

        puts(flag ? "YES" : "NO");
    }

    return 0;
}
