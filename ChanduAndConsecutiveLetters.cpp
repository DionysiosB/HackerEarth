#include <iostream>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        std::string s; getline(std::cin, s);
        std::cout << s[0];
        for(size_t p = 1; p < s.size(); p++){if(s[p] != s[p - 1]) std::cout << s[p];}
        std::cout << std::endl;
    }

    return 0;
}
