#include <iostream>

int main(){

    const int M = 6;
    std::string s; getline(std::cin, s);

    int lastDigit = s[s.size() - 1] - 'a' + 1;
    if(lastDigit % 2 > 0){puts("NO"); return 0;}

    long digitSum(0);
    for(size_t p = 0; p < s.size(); p++){digitSum += s[p] - 'a' + 1;}
    if(digitSum % 3 > 0){puts("NO"); return 0;}

    puts("YES");

    return 0;
}
