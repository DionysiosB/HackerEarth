#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> boxes(n);
    for(long p = 0; p < n; p++){scanf("%ld", &boxes[p]);}
    sort(boxes.begin(), boxes.end());
    for(long p = 0; p < n; p++){boxes[p] -= p;}
    for(long p = 0; p < n; p++){printf("%ld ", boxes[p]);}
    puts("");

    return 0;
}
