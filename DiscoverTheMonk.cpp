#include <cstdio>
#include <set>

int main(){

    long n, q; scanf("%ld %ld\n", &n, &q); 
    std::set<long> numbers;
    while(n--){long x; scanf("%ld", &x); numbers.insert(x);}
    while(q--){long x; scanf("%ld", &x); puts(numbers.count(x) > 0 ? "YES" : "NO");}
    return 0;
}
