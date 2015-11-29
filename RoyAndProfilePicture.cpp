#include <cstdio>

int main(){

    long L; scanf("%ld\n", &L);
    long N; scanf("%ld\n", &N);

    while(N--){
        long w, h; scanf("%ld %ld\n", &w, &h);
        if(w < L || h < L){puts("UPLOAD ANOTHER");}
        else if(w == h){puts("ACCEPTED");}
        else{puts("CROP IT");}
    }

    return 0;
}
