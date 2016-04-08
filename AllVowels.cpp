#include <iostream>
#include <set>

bool isVowel(char x){return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';}

int main(){

    const int NUM_VOWELS = 5;
    int n; std::string s; std::cin >> n >> s;
    std::set<char> vowels;
    for(int p = 0; p < s.size(); p++){if(isVowel(s[p])){vowels.insert(s[p]);}}
    std::cout << (vowels.size() == NUM_VOWELS ? "YES" : "NO") << std::endl;

    return 0;
}
