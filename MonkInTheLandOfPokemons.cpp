#include <cstdio>
#include <map>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long n; scanf("%ld\n", &n);

        long count(0);
        std::map<long, long> food;
        while(n--){
            long a, b; scanf("%ld %ld\n", &a, &b);
            if(food.count(a) > 0){++food[a];}
            else{food[a] = 1;}

            if(food.count(b) <= 0 || food[b] <= 0){++count;}
            else{--food[b];}
        }

        printf("%ld\n", count);
    }

    return 0;
}
