#include <iostream>

bool isPalindrome(std::string x){

    for(int p = 0; p < x.size() / 2; p++){
        if(x[p] != x[x.size() - 1 - p]){return false;}
    }

    return true;
}

int main(){

    std::string s; getline(std::cin, s);
    long long count(0);
    for(int p = 0; p < s.size(); p++){
        for(int q = p; q < s.size(); q++){
            count += isPalindrome(s.substr(p, q - p + 1));
        }
    }

    std::cout << count << std::endl;

    return 0;
}
