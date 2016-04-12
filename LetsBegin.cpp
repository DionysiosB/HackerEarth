#include <cstdio>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long x; scanf("%ld\n", &x);
        long div = x / 7;

        if(x <= 1){puts("-1");}
        else if(x % 7 == 0){printf("%ld\n", div);}
        else if(x % 7 == 1){printf("%ld\n", div + 1);}
        else if(x % 7 == 2){printf("%ld\n", div + 1);}
        else if(x % 7 == 3){printf("%ld\n", div + 1);}
        else if(x % 7 == 4){printf("%ld\n", div + 2);}
        else if(x % 7 == 5){printf("%ld\n", div + 1);}
        else if(x % 7 == 6){printf("%ld\n", div + 2);}
        else{puts("Error");}
    }

    return 0;
}
