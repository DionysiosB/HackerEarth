#include <iostream>
#include <map>

int main(){

    std::map<char, int> counts;
    counts['0'] = 6;
    counts['1'] = 2;
    counts['2'] = 5;
    counts['3'] = 5;
    counts['4'] = 4;
    counts['5'] = 5;
    counts['6'] = 6;
    counts['7'] = 3;
    counts['8'] = 7;
    counts['9'] = 6;

    std::string number; getline(std::cin, number);
    long total(0);
    for(size_t p = 0; p < number.size(); p++){total += counts[number[p]];}
    std::cout << total << std::endl;

    return 0;
}
