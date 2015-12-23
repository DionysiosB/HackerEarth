#include <cstdio>
#include <iostream>

int main(){

    long n; scanf("%ld\n", &n);

    long prevDom(0), maxDom(0);
    for(long p = 0; p < n; p++){
        long current; scanf("%ld", &current);
        long diff = current - prevDom;
        if(diff < 0){diff = -diff;}
        if(diff > maxDom){maxDom = diff;}
        prevDom = current;
    }

    long prevBrian(0), maxBrian(0);
    for(long p = 0; p < n; p++){
        long current; scanf("%ld", &current);
        long diff = current - prevBrian;
        if(diff < 0){diff = -diff;}
        if(diff > maxBrian){maxBrian = diff;}
        prevBrian = current;
    }

    if(maxDom == maxBrian){puts("Tie"); printf("%ld\n", maxBrian);}
    else if(maxBrian > maxDom){puts("Brian"); printf("%ld\n", maxBrian);}
    else if(maxBrian < maxDom){puts("Dom"); printf("%ld\n", maxDom);}

    return 0;
}
