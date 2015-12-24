#include <cstdio>
#include <vector>

int main(){

    const int MOD = 10;

    int T; scanf("%d\n", &T);
    while(T--){
        int n; scanf("%d\n",&n);
        std::vector<bool> present(MOD, 0);
        int collisions(0);
        while(n--){
            long x; scanf("%ld", &x);
            if(present[x % MOD]){++collisions;}
            else{present[x % MOD] = 1;}
        }

        printf("%d\n", collisions);
    }

    return 0;
}
