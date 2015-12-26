#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        std::string s; getline(std::cin, s);
        std::string ans("");
        ans = ans + s[0];
        for(long p = 1; p < s.size(); p++){
            if(s[p - 1] != s[p]){ans = ans + s[p];}
        }

        std::cout << ans << std::endl;
    }

    return 0;
}
