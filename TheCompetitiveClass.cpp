#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n; scanf("%d\n", &n);
    std::vector<std::pair<int, int> > scores(n);
    for(int p = 0; p < n; p++){
        int x; scanf("%d", &x);
        scores[p] = std::make_pair(x, p);
    }

    sort(scores.begin(), scores.end());

    std::vector<int> rank(n);
    int current(1);
    rank[scores[n - 1].second] = current;
    for(int p = n - 2; p >= 0; p--){
        if(scores[p].first < scores[p + 1].first){current = n - p;}
        rank[scores[p].second] = current;
    }

    for(int p = 0; p < n; p++){printf("%d ", rank[p]);}
    puts("");

    return 0;
}
