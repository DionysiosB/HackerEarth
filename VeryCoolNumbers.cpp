#include <cstdio>
#include <vector>

int countPatterns(long x){

    std::vector<int> binary;
    while(x > 0){binary.push_back(x % 2); x /= 2;}
    int count(0);
    for(int p = 0; p + 2 < binary.size(); p++){
        if(binary[p] == 1 && binary[p + 1] == 0 && binary[p + 2] == 1){++count;}
    }

    return count;
}

int main(){

    const int seek = 5; 
    int T; scanf("%d\n", &T);
    std::vector<long> range(T);
    std::vector<int> goal(T);
    long maxRange(0);
    for(int p = 0; p < T; p++){
        scanf("%ld %d\n", &range[p], &goal[p]);
        maxRange = (maxRange > range[p]) ? maxRange : range[p];
    }

    std::vector<int> counts(maxRange + 1, 0);
    for(long p = 0; p <= maxRange; p++){counts[p] = countPatterns(p);}

    for(int p = 0; p < T; p++){
        int total(0);
        for(int r = 0; r <= range[p]; r++){if(counts[r] >= goal[p]){++total;}}
        printf("%d\n", total);
    }

    return 0;
}
