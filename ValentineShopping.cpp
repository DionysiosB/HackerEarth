#include <cstdio>

int main(){

    long T; scanf("%ld\n", &T);
    while(T--){

        int N, M; scanf("%d %d\n", &N, &M);
        for(int p = 0; p < N; p++){
            int best(-1);
            long bestPrice(100 * 100 * 100);
            for(int s = 0; s < M; s++){
                int a, b, c; scanf("%d %d %d\n", &a, &b, &c);
                long price = (100 - a) * (100 - b) * (100 - c);
                if(price < bestPrice){bestPrice = price; best = s;}
            }
            printf("%d ", best + 1);
        }
        puts("");
    }

    return 0;
}
