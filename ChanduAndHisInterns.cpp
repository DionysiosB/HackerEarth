#include <cstdio>
#include <cmath>
#include <vector>
#include <set>

std::set<long> getSimples(long L){

    std::set<long> ans; ans.insert(1);
    std::vector<bool> isPrime(L + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for(long p = 2; p <= 1 + sqrt(L); p++){
        if(!isPrime[p]){continue;}
        ans.insert(p * p);
        for(long q = 2 * p; q <= L; q += p){isPrime[q] = 0;}
    }

    for(long p = 0; p <= L; p++){if(isPrime[p]){ans.insert(p);}}

    return ans;
}



int main(){

    const long LIMIT = 10000001;
    std::set<long> simples = getSimples(LIMIT);

    long n; scanf("%ld\n", &n);
    while(n--){long x; scanf("%ld\n", &x); puts(simples.count(x) > 0 ? "NO" : "YES");}

    return 0;
}
