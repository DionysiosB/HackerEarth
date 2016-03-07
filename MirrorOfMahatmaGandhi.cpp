#include <cstdio>
#include <iostream>

int main(){

    int t; scanf("%d\n", &t);
    while(t--){
        std::string number; getline(std::cin, number);

        bool isSymmetric(1);
        for(int p = 0; p <= 1 + number.size() / 2; p++){
            if((number[p] != '0' && number[p] != '1' && number[p] != '8') || (number[p] != number[number.size() - 1 - p])){isSymmetric = 0; break;}
        }
        puts(isSymmetric ? "YES" : "NO");
    }

    return 0;
}
