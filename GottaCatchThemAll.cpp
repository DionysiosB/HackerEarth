#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    long k; scanf("%ld\n", &k);
    std::vector<long> evolution(k);
    for(long p = 0; p < k; p++){scanf("%ld", &evolution[p]);}
    sort(evolution.begin(), evolution.end());
    reverse(evolution.begin(), evolution.end());

    long last(0);
    for(long p = 0; p < k; p++){last = std::max(last, evolution[p] + p + 2);}
    std::cout << last << std::endl;

    return 0;
}

