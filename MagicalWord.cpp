#include <cstdio>
#include <iostream>
#include <vector>

char getClosestPrime(char c){

    std::vector<int> cp(12);
    cp[0] = 67; cp[1] = 71; cp[2] = 73; cp[3] = 79; cp[4] = 83; cp[5] = 89;
    cp[6] = 97; cp[7] = 101; cp[8] = 103; cp[9] = 107; cp[10] = 109; cp[11] = 113;
    int minDiff(100);
    char ans;
    int x = (int) c;
    for(int p = 0; p < cp.size(); p++){
        int diff = x - cp[p];
        if(diff < 0){diff = -diff;}
        if(diff < minDiff){minDiff = diff; ans = (char) cp[p];}
    }

    return ans;
}

int main(){

    int t; std::cin >> t;
    while(t--){
        long len; std::cin >> len;
        std::string s; std::cin >> s;
        for(int p = 0; p < s.size(); p++){std::cout << getClosestPrime(s[p]);}
        std::cout << std::endl;
    }

    return 0;
}
