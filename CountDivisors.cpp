#include <iostream>

int main(){

    long l, r, k; std::cin >> l >> r >> k;
    long ans = (r / k) - ((l - 1)/ k);
    std::cout << ans << std::endl;

    return 0;
}
