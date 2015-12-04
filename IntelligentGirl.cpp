#include <iostream>
#include <vector>

int main(){

    std::string s; getline(std::cin, s);
    std::vector<long> count(s.size() + 1, 0);
    for(long p = s.size() - 1; p >= 0; p--){count[p] = count[p + 1] + ((s[p] - '0') % 2 == 0);}
    for(size_t p = 0; p < s.size(); p++){std::cout << count[p] << " ";}
    std::cout << std::endl;

    return 0;
}
