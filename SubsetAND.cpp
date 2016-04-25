#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        long z, n; std::cin >> z >> n;
        while(n--){long x; std::cin >> x; z &= x;}
        std::cout << (z ? "No" : "Yes") << std::endl;
    }

    return 0;
}
