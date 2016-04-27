#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);

    int t; std::cin >> t;
    while(t--){
        int64_t n; std::cin >> n;
        std::cout << (n * (n * n - 1) / 3) << std::endl;
    }

    return 0;
}
