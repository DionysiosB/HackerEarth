#include<cstdio>
#include<iostream>
#include<vector>

int main(){

    const int L = 102;

    int t; scanf("%d\n", &t);
    while(t--){
        int n, k; scanf("%d %d\n", &n, &k);
        std::vector<int> count(L, 0);
        while(n--){std::string s; getline(std::cin, s); ++count[s.size()];}
        bool possible(1);
        for(int p = 0; p < L; p++){if(count[p] % k){possible = 0;}}
        puts(possible ? "Possible" : "Not possible");
    }

    return 0;
}
