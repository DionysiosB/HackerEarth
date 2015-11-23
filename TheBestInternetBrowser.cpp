#include <cstdio>
#include <ctype.h>
#include <iostream>
#include <string>

bool isVowel(char c){
    char d = tolower(c);
    return (d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u');
}

int main(){

    int tc; scanf("%d\n", &tc);
    while(tc--){
        std::string address; getline(std::cin, address);

        int typed(0);
        for(int p = 0; p < address.size(); p++){if(!isVowel(address[p])){++typed;}}
        std::cout << (typed - 3) << "/" << address.size() << std::endl;
    }


    return 0;
}
