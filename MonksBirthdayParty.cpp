#include <cstdio>
#include <iostream>
#include <set>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        long n; scanf("%ld\n", &n);
        std::set<std::string> list;
        while(n--){
            std::string name; getline(std::cin, name);
            list.insert(name);
        }

        for(std::set<std::string>::iterator setIter = list.begin(); setIter != list.end(); setIter++){std::cout << *setIter << std::endl;}
    }

    return 0;
}
