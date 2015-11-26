#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        std::string s; getline(std::cin, s);
        for(long p = 0; p < s.size(); p++){printf("%c", s[s.size() - 1 - p]);}
        puts("");
    }


    return 0;
}
