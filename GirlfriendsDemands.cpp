#include <iostream>

int main(){

    std::string s; getline(std::cin, s);
    long Q; std::cin >> Q;
    while(Q--){
        int64_t a, b; std::cin >> a >> b;
        --a; --b;
        if(s[a % s.size()] == s[b % s.size()]){puts("Yes");}
        else{puts("No");}
    }

    return 0;
}
