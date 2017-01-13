#include <iostream>

int main(){

    std::string s; std::cin >> s;
    bool palin(true);
    for(int p = 0; p < s.size() / 2; p++){
        if(s[p] != s[s.size() - 1 - p]){palin = false; break;}
    }

    std::cout << (palin ? "YES" : "NO") << std::endl;

    return 0;
}
