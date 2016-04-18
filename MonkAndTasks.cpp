#include <iostream>
#include <vector>
#include <algorithm>

int getNumBits(int64_t x){
    int numBits(0);
    while(x > 0){numBits += x % 2; x /= 2;}
    return numBits;
}

int main(){

    int t; std::cin >> t; 
    while(t--){
        long n; std::cin >> n;
        std::vector<std::pair<std::pair<int, long>, int64_t> > array(n);
        for(long p = 0; p < n; p++){
            int64_t x; std::cin >> x;
            array[p].first.first = getNumBits(x);
            array[p].first.second = p;
            array[p].second = x;
        }

        sort(array.begin(), array.end());
        for(long p = 0; p < n; p++){std::cout << array[p].second << " ";}
        std::cout << std::endl;
    }

    return 0;
}
