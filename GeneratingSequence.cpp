#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        int64_t g; int n; std::cin >> g >> n;
        for(int p = 2; p < n + 1; p++){std::cout << 2 * g << " ";}
        std::cout << (3 * g) << std::endl;
    }

    return 0;
}
