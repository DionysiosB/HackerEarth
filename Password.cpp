#include <cstdio>
#include <iostream>
#include <set>

std::string stringReverse(std::string input){
    std::string output(input);
    for(size_t p = 0; p < input.size(); p++){output[p] = input[input.size() - 1 - p];}
    return output;
}

int main(){

    int n; scanf("%d\n", &n);
    std::set<std::string> list;
    std::string ans;
    for(int p = 0; p < n; p++){
        std::string s; getline(std::cin, s);
        if(list.count(stringReverse(s))){ans = s;}
        list.insert(s);
    }

    std::cout << ans.size() << " " << ans[ans.size() / 2] << std::endl;

    return 0;
}
