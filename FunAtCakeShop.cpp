#include <cstdio>

int main(){

    long x; scanf("%ld\n", &x);
    int round(1);
    while(x > 0){
        x -= round;
        if(x <= 0){puts("Darshak"); return 0;}
        x -= round * round;
        if(x <= 0){puts("Chandan"); return 0;}
        ++round;
    }

    return 0;
}
