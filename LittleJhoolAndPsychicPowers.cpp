#include <iostream>

int main(){

    const int N = 6;
    std::string s; std::cin >> s;
    int count(1);
    bool luck(1);
    for(int p = 1; p < s.size(); p++){
        if(s[p] == s[p - 1]){++count;}
        else{count = 1;}
        if(count >= N){luck = 0; break;}
    }

    std::cout << (luck ? "Good luck!" : "Sorry, sorry!") << std::endl;

    return 0;
}
