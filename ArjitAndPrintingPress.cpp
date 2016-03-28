#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){

        std::string s; getline(std::cin, s);
        std::string r; getline(std::cin, r);
        sort(r.begin(), r.end());
        long index(0);
        for(long p = 0; p < s.size(); p++){
            if(r[index] < s[p]){s[p] = r[index++];}
            if(index >= r.size()){break;}
        }

        std::cout << s << std::endl;
    }

    return 0;
}
