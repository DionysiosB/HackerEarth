#include <iostream>

int main(){
    long t; std::cin >> t; 
    while(t--){
        long n, r; std::cin >> n >> r;
        int64_t s = 1;
        for(long p = 1; p <= r; p++){s *= n - r + p; s /= p;}
        std::cout << s << std::endl;
    }

    return 0;
}
