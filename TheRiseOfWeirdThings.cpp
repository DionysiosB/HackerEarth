#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> zombies; 
    std::vector<long> vampires;
    long zombieTotal(0);
    long vampireTotal(0);

    while(n--){
        long x; scanf("%ld", &x);
        if(x % 2){vampires.push_back(x); vampireTotal += x;}
        else{zombies.push_back(x); zombieTotal += x;}
    }

    sort(zombies.begin(), zombies.end());
    sort(vampires.begin(), vampires.end());
    for(size_t p = 0; p < zombies.size(); p++){printf("%ld ", zombies[p]);}
    printf("%ld ", zombieTotal);
    for(size_t p = 0; p < vampires.size(); p++){printf("%ld ", vampires[p]);}
    printf("%ld\n", vampireTotal);

    return 0;
}
