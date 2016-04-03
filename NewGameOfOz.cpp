#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    int T; scanf("%d\n", &T);
    while(T--){
        int n; scanf("%d\n", &n);
        std::vector<int> array(n, 0);
        for(int p = 0; p < n; p++){scanf("%d", &array[p]);}
        sort(array.begin(), array.end());
        int count(0), index(0);
        while(index < n){
            if(index == n - 1){++count; break;}
            if(array[index + 1] == array[index] + 1){++index;}
            ++count; ++index;
        }

        printf("%d\n", count);
    }

    return 0;
}
