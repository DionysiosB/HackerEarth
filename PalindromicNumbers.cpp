#include <cstdio>
#include <vector>

std::vector<int> vectorize(long x){
    std::vector<int> res;
    while(x > 0){res.push_back(x % 10); x /= 10;}
    return res;
}

bool isPalindrome(long x){
    std::vector<int> v = vectorize(x);
    for(size_t p = 0; p < v.size() / 2; p++){if(v[p] != v[v.size() - 1 - p]){return false;}}
    return true;
}


int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        long A, B; scanf("%ld %ld\n", &A, &B);
        long total(0);
        for(long p = A; p <= B; p++){total += isPalindrome(p);}
        printf("%ld\n", total);
    }

    return 0;
}
