#include <iostream>

int main(){

    int t; std::cin >> t;
    while(t--){
        int64_t n; std::cin >> n;

        long count(0);
        for(long p = 1; p * p <= n; p++){
            if(n % p > 0){continue;}
            count += 2 - (p * p == n);
        }

        std::cout << count << std::endl;
    }

    return 0;
}
