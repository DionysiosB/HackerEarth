#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int t; std::cin >> t;
    while(t--){
        long n; std::cin >> n;
        std::vector<long> girls(n);
        for(long p = 0; p < n; p++){std::cin >> girls[p];}
        std::vector<long> boys(n);
        for(long p = 0; p < n; p++){std::cin >> boys[p];}
        sort(girls.begin(), girls.end());
        sort(boys.begin(), boys.end(), std::greater<long>());

        long ideal(0);
        for(long p = 0; p < n; p++){
            ideal += (boys[p] % girls[p] == 0) || (girls[p] % boys[p] == 0);
        }

        printf("%ld\n", ideal);
    }

    return 0;
}
