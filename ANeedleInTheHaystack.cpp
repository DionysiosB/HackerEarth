#include <cstdio>
#include <iostream>
#include <vector>

bool sameVectors(std::vector<long> x, std::vector<long> y){
    if(x.size() != y.size()){return false;}
    for(long p = 0; p < x.size(); p++){if(x[p] != y[p]){return false;}}
    return true;
}

std::vector<long> getLetterFreq(std::string x){
    const int N = 26;
    std::vector<long> counts(N, 0);
    for(long p = 0; p < x.size(); p++){++counts[x[p] - 'a'];}
    return counts;
}


int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        std::string pattern; getline(std::cin, pattern);
        std::vector<long> patternDistr = getLetterFreq(pattern);

        std::string text; getline(std::cin, text);
        std::vector<long> testDistr = getLetterFreq(text.substr(0, pattern.size()));

        bool ans = sameVectors(patternDistr, testDistr);
        if(ans){puts("YES"); return 0;}

        for(long p = 1; p < text.size() - pattern.size() + 1; p++){
            --testDistr[text[p - 1] - 'a'];
            ++testDistr[text[p + pattern.size() - 1] - 'a'];
            if(sameVectors(patternDistr, testDistr)){ans = true; break;}
        }

        puts(ans ? "YES" : "NO");
    }

    return 0;
}
