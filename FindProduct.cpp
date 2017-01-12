#include <iostream>

int main(){

    const int64_t MOD = 1000000007;
    std::ios_base::sync_with_stdio(false);
    long n; std::cin >> n;
    int64_t prod(1);
    while(n--){
        int64_t x; std::cin >> x;
        prod *= x;
        prod %= MOD;
    }

    std::cout << prod << std::endl;

    return 0;
}
