#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main(){

    long n; std::cin >> n;
    long most(0);
    std::map<std::string, long> matches;
    for(long p = 0; p < n; p++){
        std::string x, y; std::cin >> x >> y;

        if(matches.count(x) <= 0){matches.insert(std::pair<std::string, long>(x, 0));}
        if(matches.count(y) <= 0){matches.insert(std::pair<std::string, long>(y, 0));}

        ++matches[x]; ++matches[y];
        if(most < matches[x]){most = matches[x];}
        if(most < matches[y]){most = matches[y];}
    }


    std::vector<std::string> names;
    for(std::map<std::string, long>::iterator mapIter = matches.begin(); mapIter != matches.end(); mapIter++){
        if(mapIter->second == most){names.push_back(mapIter->first);}
    }

    sort(names.begin(), names.end());
    std::cout << names.size() << std::endl;
    for(size_t p = 0; p < names.size(); p++){std::cout << names[p] << std::endl;}

    return 0;
}
