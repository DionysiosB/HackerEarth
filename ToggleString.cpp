#include <cstdio>
#include <iostream>

int main(){

    std::string s; std::cin >> s;
    for(int p = 0; p < s.size(); p++){
        if(islower(s[p])){s[p] = toupper(s[p]);}
        else if(isupper(s[p])){s[p] = tolower(s[p]);}
    }

    std::cout << s << std::endl;

    return 0;
}
