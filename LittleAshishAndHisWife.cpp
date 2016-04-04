#include <cstdio>
#include <set>

int main(){

    int tc; scanf("%d\n", &tc);
    while(tc--){
        long n, x; scanf("%ld %ld\n", &n, &x);
        std::set<long> prices;
        while(n--){long p; scanf("%ld", &p); prices.insert(p);}
        if(prices.size() < x){puts("Bad husband");}
        else if(prices.size() == x){puts("Perfect husband");}
        else if(prices.size() > x){puts("Lame husband");}
    }

    return 0;
}
