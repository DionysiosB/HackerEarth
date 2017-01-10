#include<iostream>

int main(){

    int n; std::cin >> n;
    int64_t fac(1);
    for(int p = 2; p <= n; p++){fac *= p;}
    std::cout << fac << std::endl;

    return 0;
}
