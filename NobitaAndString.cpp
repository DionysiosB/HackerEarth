#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main(){

    long t; scanf("%ld\n", &t);
    while(t--){
        std::string line; getline(std::cin, line);
        std::istringstream iss(line);

        std::string temp;
        std::vector<std::string> words;
        while(iss >> temp){words.push_back(temp);}
        for(long p = words.size(); p >= 0; p--){std::cout << words[p] << " ";}
        std::cout << std::endl;
    }


    return 0;
}
