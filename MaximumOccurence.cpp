#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const long N = 256;

    std::vector<long> counts(N);
    for(long p = 0; p < N; p++){counts[p] = p;}

    std::string s; getline(std::cin, s);
    for(long p = 0; p < s.size(); p++){counts[s[p]] += N;}

    char x; long maxCount(0);
    for(long p = 0; p < N; p++){
        long actualCount = (counts[p] - p) / N;
        if(maxCount < actualCount){x = p; maxCount = actualCount;}
    }

    printf("%c %ld\n", x, maxCount);

    return 0;
}
