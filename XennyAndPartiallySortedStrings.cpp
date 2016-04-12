#include <iostream>
#include <vector>
#include <algorithm>

long N, K, M;

bool stringCompare(std::string a, std::string b){
    return a.substr(0, M) < b.substr(0, M);
}


int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        std::cin >> N >> K >> M;
        std::vector<std::string> strings(N);
        for(long p = 0; p < N; p++){std::cin >> strings[p];}
        sort(strings.begin(), strings.end(), stringCompare);
        std::cout << strings[K - 1] << std::endl;
    }

    return 0;
}
