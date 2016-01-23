#include <cstdio>
#include <vector>
#include <set>
#include <cmath>

int64_t reverse(int64_t x){
    int64_t ans(0);
    while(x > 0){ans = 10 * ans + (x % 10); x /= 10;}
    return ans;
}

std::set<int64_t> getPrimeSubset(int64_t L){

    std::vector<bool> isPrime(L + 1, true);
    isPrime[0] = isPrime[1] = 0;
    for(int64_t p = 2; p <= 1 + sqrt(L); p++){
        if(isPrime[p]){for(int64_t q = 2 * p; q <= L; q += p){isPrime[q] = 0;}}
    }

    std::set<int64_t> res;
    for(int64_t p = 0; p <= L; p++){
        if(!isPrime[p]){continue;}
        int64_t r = reverse(p);
        if(r != p && res.count(r) <= 0){res.insert(p);}
    }

    return res;
}

int main(){

    int64_t LIMIT = 16297020;
    std::set<int64_t> primes = getPrimeSubset(LIMIT);
    //printf("==== %ld ===== \n", primes.size());
    for(std::set<int64_t>::iterator setIter = primes.begin(); setIter != primes.end(); setIter++){printf("%lld\n", *setIter);}

    return 0;
}
