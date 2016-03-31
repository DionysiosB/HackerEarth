#include <cstdio>
#include <iostream>
#include <set>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        std::string str1; getline(std::cin, str1);
        std::set<char> set1;
        for(int p = 0; p < str1.size(); p++){set1.insert(str1[p]);}

        std::string str2; getline(std::cin, str2);
        bool res(0);
        for(int p = 0; p < str2.size(); p++){if(set1.count(str2[p])){res = 1; break;}}
        puts(res ? "YES" : "NO");
    }

    return 0;
}
