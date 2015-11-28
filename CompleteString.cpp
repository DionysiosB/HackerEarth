#include <cstdio>
#include <iostream>
#include <set>

int main(){

    const int L = 26;

    int N; scanf("%d\n", &N);
    while(N--){
        std::string s; getline(std::cin, s);
        std::set<char> letters;
        for(size_t p = 0; p < s.size(); p++){letters.insert(s[p]);}
        puts(letters.size() >= L ? "YES" : "NO");
    }

    return 0;
}
