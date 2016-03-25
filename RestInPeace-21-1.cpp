#include <iostream>

bool containsTwentyOne(long x){

    while(x >= 21){
        if((x % 10 == 1) && ((x % 100) / 10 == 2)){return true;}
        x /= 10;
    }

    return false;
}

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long n; scanf("%ld\n", &n);
        if(n % 21 == 0 || containsTwentyOne(n)){puts("The streak is broken!");}
        else{puts("The streak lives still in our heart!");}
    }

    return 0;
}
