#include <iostream>
#include <vector>

int main(){

    const int N = 26;

    long T; scanf("%ld\n", &T);
    while(T--){
        std::string s1, s2; std::cin >> s1 >> s2;
        std::vector<bool> present(N);
        bool found(false);
        for(size_t p = 0; p < s1.size(); p++){present[s1[p] - 'a'] = 1;}
        for(size_t p = 0; p < s2.size(); p++){if(present[s2[p] - 'a']){found = true; break;}}
        std::cout << (found ? "Yes" : "No") << std::endl;
    }

    return 0;
}
