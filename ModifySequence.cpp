#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> array(n);
    for(long p = 0; p < n; p++){scanf("%ld", &array[p]);}
    bool possible(true);
    for(long p = 1; p < n; p++){
        array[p] -= array[p - 1];
        if(array[p] < 0){possible = false; break;}
    }
    if(array.back() != 0){possible = false;}

    puts(possible ? "YES" : "NO");

    return 0;
}
